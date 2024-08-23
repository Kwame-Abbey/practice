#!/usr/bin/python3
"""prints the result of the addition of all arguments"""
from sys import argv


if __name__ == '__main__':
    result = 0
    if len(argv) - 1 == 0:
        print(0)
    else:
        for i in argv[1:]:
            result += int(i)
        print(result)
        