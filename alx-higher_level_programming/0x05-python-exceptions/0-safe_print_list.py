#!/usr/bin/python3


def safe_print_list(my_list=[], x=0):
    if my_list:
        length = 0
        should_break = False
        for i in range(x):
            try:
                print("{}".format(my_list[i]), end="")
                length += 1
            except IndexError:
                should_break = True
            if should_break:
                break
        print()
        return length
