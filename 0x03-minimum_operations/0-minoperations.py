#!/usr/bin/python3
"""
File:
0x03-minimum_operations/0-minoperations.py
"""


def totalFactors(n):
    """
    This method returns how many factors are within n
    """
    total = 0
    for i in range(1, n + 1):
        if n % i == 0:
            total += 1
    return total


def minOperations(n):
    """
    Calls totalFactors() in order to get amount and adds 1
    """
    if n <= 1:
        return 0

    total = totalFactors(n)

    if total == 2:  # would be a prime number
        return n
    return total + 1
    # The amount of factors is how many times needed + 1 for inital copy
