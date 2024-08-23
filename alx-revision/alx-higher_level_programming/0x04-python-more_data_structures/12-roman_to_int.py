#!/usr/bin/python3

def roman_to_int(roman_string):
    romans = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 
              'C': 100, 'D': 500, 'M': 1000}

    res = 0
    for cur, next in zip(roman_string, roman_string[1:]):
        if romans[cur] >= romans[next]:
            res += romans[cur]
        else:
            res -= romans[cur]
    res += romans[roman_string[-1]]
    return res