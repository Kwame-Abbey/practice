#!/usr/bin/python3


def square_matrix_simple(matrix=[]):
    if matrix:
        n_list = []
        for i in range(len(matrix)):
            new_list = list(map(lambda x: x ** 2, matrix[i]))
            n_list.append(new_list)
        return n_list
