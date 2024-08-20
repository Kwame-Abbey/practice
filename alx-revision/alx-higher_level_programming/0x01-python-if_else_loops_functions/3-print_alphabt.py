#!/usr/bin//python3
"""Prints lowercase alphabets except q and e"""

for i in range(97, 123):
    if chr(i) != 'q' and chr(i) != 'e': 
        print(chr(i), end='')