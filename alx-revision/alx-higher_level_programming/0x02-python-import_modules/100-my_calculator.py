#!/usr/bin/python3
"""Build my own calculator"""
from sys import argv, exit
from calculator_1 import add, sub, mul, div

if __name__ == '__main__':
    if len(argv) - 1 != 3:
        print(f"Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)
    
    op = {
        '+': add,
        '-': sub,
        '*': mul,
        '/': div
    }
    
    if argv[2] not in op.keys():
        print('Unknown operator. Available operators: +, -, * and /')
        exit(1)
    
    a = int(argv[1])
    b = int(argv[3])
    operator = argv[2]
    print(f'{a} {operator} {b} = {op[operator](a, b)}')