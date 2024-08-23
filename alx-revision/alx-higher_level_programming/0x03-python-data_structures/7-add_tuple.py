#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
    """adds 2 tuples"""
    if len(tuple_a) == 0:
        tuple_a = (0, 0)
    if len(tuple_b) == 0:
        tuple_b = (0, 0)
    if len(tuple_a) == 1:
        tuple_a = list(tuple_a)
        tuple_a.append(0)
    if len(tuple_b) == 1:
        tuple_b = list(tuple_b)
        tuple_b.append(0)
    return (tuple_a[0] + tuple_b[0], tuple_a[1] + tuple_b[1])
    