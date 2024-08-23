def print_matrix_integer(matrix=[[]]):
    """prints a matrix of integers"""
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if (j != len(matrix) - 1):
                print("{}".format(matrix[i][j]), end=' ')
            else:
                print("{}".format(matrix[i][j]))
    
        