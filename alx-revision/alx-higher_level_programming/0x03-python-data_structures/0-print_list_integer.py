#!/usr/bin/python3
"""prints all integers of a list"""


def print_list_integer(my_list=[]):
    """Prints all integers of a list"""
    for i in my_list:
        print("{:d}".format(i))