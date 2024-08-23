#!/usr/bin/python3


def square_matrix_simple(matrix=[]):
    nm = []
    for i in range(len(matrix)):
        nm.append([])
        for j in range(len(matrix[0])):
            nm[i].append(matrix[i][j] * matrix[i][j])
    
    return nm
            