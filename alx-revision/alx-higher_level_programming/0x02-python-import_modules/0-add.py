#!/usr/bin/python3
"""prints the result of the addition"""
from add_0 import add


if __name__ == '__main__':
    a = 1
    b = 2
    print("{} + {} = {}".format(a, b, add(a, b)))