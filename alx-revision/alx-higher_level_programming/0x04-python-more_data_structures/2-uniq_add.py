#!/usr/bin/python3

def uniq_add(my_list=[]):
    # my_list = set(my_list)
    # return sum(my_list)
    nm = []
    for i in my_list:
        if i in nm:
            continue
        else:
            nm.append(i)
    return sum(nm)