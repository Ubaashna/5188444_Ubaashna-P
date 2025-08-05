#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    time = s.split(':')
    hh = int(time[0])
    mm = time[1]
    ss_ampm = time[2]
    ss = ss_ampm[0:2]
    ampm = ss_ampm[2:]
    
    if ampm =='AM' and hh==12:
        hh=00
    if ampm =='PM' and hh!=12:
        hh+=12
    HH = f"{hh:02d}"
    return f"{HH}:{mm}:{ss}"    

if __name__ == '__main__':

    s = input()

    result = timeConversion(s)
    print(result)