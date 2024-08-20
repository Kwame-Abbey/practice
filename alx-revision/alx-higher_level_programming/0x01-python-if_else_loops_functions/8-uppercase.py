#!/usr/bin/python3
"""prints a string in uppercase"""


def uppercase(str):
    """Prints a string in upper case"""
    new_string = ''
    for char in str:
        if 97 <= ord(char) <= 122:
            char = chr(ord(char) - 32)
            new_string += char
        else:
            new_string += char
    print(new_string)