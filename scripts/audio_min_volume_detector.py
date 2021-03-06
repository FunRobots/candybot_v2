#!/usr/bin/env python3
'''
    1. calculates minimal rms per time unit
    2. sets rms as min_rms param of ROS ParameterServer
'''

import pyaudio
import audioop
import time
import rospy

import logging

import os
LOG_FOLDER = 'logs'
if os.path.exists(LOG_FOLDER) is False:
    os.mkdir(LOG_FOLDER)

logging.basicConfig(filename=LOG_FOLDER + '/' + __name__ + '.log', format='[%(asctime)s] %(message)s\n\n',
                    level=logging.DEBUG)

from typing import Dict

class RMS:
    '''Calculates minimal audio volume (rms) value'''

    def __init__(self, rms_intervals_number=None, rms_interval_length=None, time_interval=None):
        '''Init method
        Args:
            rms_intervals_number: number of rms intervals
            rms_interval_length: length of rms interval
            time_interval: interval of time to calculate minimal rms
        '''
        self.error = False
        try:
            self.audio = pyaudio.PyAudio()
            self.chunk = 1024
            self.rate = 16000
            self.channels = 1

            self.stream = self.audio.open(format=pyaudio.paInt16, channels=self.channels, rate=self.rate, input=True, frames_per_buffer=self.chunk)
            self.stream.start_stream()

            if rms_intervals_number is None:
                rms_intervals_number = 200
            self.rms_intervals_number = rms_intervals_number
            if rms_interval_length is None:
                rms_interval_length = 500
            self.rms_interval_length = rms_interval_length
            self.intervals_bounds = [i * self.rms_interval_length for i in range(0, rms_intervals_number)]

            if time_interval is None:
                time_interval = 1

            self.time_interval = time_interval
        except Exception as e:
            logging.error(str(e))
            self.error = True

    def __max_key__(self, dictionary):
        '''Finds key for dictionary max value
        Args:
            dictionary: dictionary for search
        Returns:
            key: dictionary key
        '''

        max_value = max(dictionary.values())
        keys = dictionary.keys()
        for key in keys:
            if dictionary[key] == max_value:
                return key


    def set_rms_intervals_numbers(self, rms_intervals_number):
        '''Sets number of intervals
        Args:
            rms_intervals_number: number of intervals
        '''

        self.intervals_bounds = [i * self.rms_interval_length for i in range(0, rms_intervals_number)]

    def set_time_interval(self, time_interval):
        '''Sets time interval during which calculate minimal rms
        Args:
            time_interval: time interval
        '''

        self.time_interval = time_interval

    def get_min_rms(self):
        '''Calculates and return minimal rms value
        Returns:
            minimal rms value
        '''
        if not self.error is True:
            intervals_rating = dict.fromkeys([i for i in range(0, self.rms_intervals_number)], 0)
            start = time.time()
            rms = []

            while time.time() - start < self.time_interval:

                chunk = self.stream.read(self.chunk)
                cur_rms = audioop.rms(chunk, 2)
                rms.append(cur_rms)
                rate_index = audioop.rms(chunk, 2) // self.rms_interval_length
                intervals_rating[rate_index] += 1

            most_popular_rms_interval = self.__max_key__(intervals_rating)
            return (most_popular_rms_interval + 1) * self.rms_interval_length
        else:
            return 0

if __name__ == '__main__':

    rms = RMS()
    #broadcasting minimal rms value
    while True:
        try:
            rospy.get_master().getPid()
        except:
            break

        rospy.set_param('min_rms',rms.get_min_rms())
