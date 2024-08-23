#!/usr/bin/python3
"""prints all integers of a list, in reverse order"""

def print_reversed_list_integer(my_list=[]):
    """prints all integers of a list, in reverse order"""
    my_list = reversed(my_list)
    for i in my_list:
        print("{}".format(i))