#!/usr/bin/python3

def weight_average(my_list=[]):
    weight = 0
    score = 0
    for tup in my_list:
        weight += tup[1]
        score += tup[0] * tup[1]
    return score / weight