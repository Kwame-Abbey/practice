#!/usr/bin/python3
"""creates a copy of the string, removing
the character at the position n
"""


def remove_char_at(str, n):
    """Removes character at a position"""
    new_str = ''
    for i in str:
        if str.index(i) != n:
            new_str += i
    return new_str