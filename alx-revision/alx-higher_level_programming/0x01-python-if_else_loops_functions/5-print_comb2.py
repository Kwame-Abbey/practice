#!/usr/bin/python3
"""Prints 00 to 99"""

for i in range(100):
    if i < 99:
        print("{:02d}".format(i), end=', ')
    else:
        print("{:02d}".format(i))