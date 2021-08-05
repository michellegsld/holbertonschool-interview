#!/usr/bin/python3
"""
0-pascal_triangle.py
pascal_triangle(n)
"""


def pascal_triangle(n):
    """
    Returns a list of lists that rep. the Pascal’s triangle
    """
    if n <= 0:
        return []

    answer = []
    i = 0
    while i < n:
        j = i
        k = 0
        level = [1]
        while j > 1:
            level.append(answer[-1][k] + answer[-1][k + 1])
            j -= 1
            k += 1
        if i > 0:
            level.append(1)
        answer.append(level)
        i += 1
    return answer
