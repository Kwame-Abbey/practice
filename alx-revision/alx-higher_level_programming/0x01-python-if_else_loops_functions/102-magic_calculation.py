#!/usr/bin/python3
"""ByteCode"""
import dis


def magic_calculation(a, b, c):
    """Magic  Calculation"""
    if a < b:
        return c
    elif c > b:
        return a + b
    else:
        return (a * b) - c
    
dis.dis(magic_calculation)