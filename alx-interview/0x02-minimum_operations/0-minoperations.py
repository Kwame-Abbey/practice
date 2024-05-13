#!/usr/bin/python3
"""Defines an algorithm for minimum operations"""


def primefactorization(num):
    """Returns a list of prime factors of a number"""
    factors = []
    div = 2
    while (div <= num):
        if num % div == 0:
            factors.append(div)
            num /= div
        else:
            div += 1
    return factors

# print(primefactorization(12))


def minOperations(n):
    """Returns the minimum operations required"""
    min = 0
    factors = primefactorization(n)
    occurrences = {fact: factors.count(fact) for fact in factors}
    for k, v in occurrences.items():
        min += k * v
        
    return min