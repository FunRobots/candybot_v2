#!/usr/bin/env python3
import sys
sys.path.insert(1,'/usr/local/lib/python3.5/dist-packages')

import cv2
import numpy

import logging
import os
LOG_FOLDER = 'logs'
if os.path.exists(LOG_FOLDER) is False:
    os.mkdir(LOG_FOLDER)

logging.basicConfig(filename=LOG_FOLDER + '/' + __name__ + '.log', format='[%(asctime)s] %(message)s\n\n',
                    level=logging.DEBUG)

def save_photo(frame: numpy.ndarray, photo_name_with_extension: str) -> str or None:
    '''
    1. takes video frame
    2. saves it with specified name
    '''
    try:
        cv2.imwrite(photo_name_with_extension, frame)
        return photo_name_with_extension
    except Exception as e:
        logging.error(str(e))
        return None
