#!/usr/bin/python3
"""
Task 0: Rotate 2D Matrix
"""


def rotate_2d_matrix(matrix):
    """
    Rotates a 2D Matrix 90 degrees clockwise
    """

    temp = [row[:] for row in matrix]
    temp.reverse()

    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            matrix[j][i] = temp[i][j]
