#!/usr/bin/python3


def matrix_divided(matrix, div):
    if type(div) is not int and type(div) is not float:
        raise TypeError('div must be a number')
    if div == 0:
        raise ZeroDivisionError('division by zero')
    len_row1 = len(matrix[0])
    new_matrix = []
    for row in matrix:
        new_row = []
        if len(row) != len_row1:
            raise TypeError('Each row of the matrix must have the same size')
        for element in row:
            if type(element) is not int and type(element) is not float:
                raise TypeError('matrix must be a matrix (list of lists)'
                                'of integers/floats')
            result = round(element / div, 2)
            new_row.append(result)
        new_matrix.append(new_row)

    return new_matrix
