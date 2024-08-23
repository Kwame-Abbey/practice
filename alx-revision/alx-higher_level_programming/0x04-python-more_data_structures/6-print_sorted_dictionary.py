#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):
    keys = a_dictionary.keys()
    keys = sorted(keys)
    for k in keys:
        print(f"{k}: {a_dictionary.get(k)}")