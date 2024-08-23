#!/usr/bin/python3

def safe_print_list_integers(my_list=[], x=0):
    nb = 0
    try:
        for i in range(x):
            print("{:d}".format(my_list[i]), end='')
            nb += 1
        return nb
    except (ValueError, TypeError):
        s = 1
        while s == 1:
            s == 0
            continue