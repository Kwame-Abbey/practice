#!/usr/bin/python3


def print_list_integer(my_list=[]):
    if my_list:
        for num in my_list:
            print("{:d}".format(num))
    else:
        pass