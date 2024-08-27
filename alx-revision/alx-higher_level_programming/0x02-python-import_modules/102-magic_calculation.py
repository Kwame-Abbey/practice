#!/usr/bin/python3
"""ByteCode"""
from magic_calculation_102 import add, sub
import dis


def magic_calculation(a, b):
    """ByteCode"""
    if a < b:
        c = add(a, b)
        for i in range(4, 6):
            c = add(c, i)
        return c
    else:
        return sub(a, b)
    
dis.dis(magic_calculation)