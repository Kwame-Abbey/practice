#!/usr/bin/python3


def search_replace(my_list, search, replace):
    nm = my_list[:]
    for ele in my_list:
        if ele == search:
            idx = nm.index(ele)
            nm[idx] = replace
            
    return nm