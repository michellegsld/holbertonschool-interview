#!/usr/bin/python3
"""
0-rain.py
"""


def rain(walls):
    """
    Calculates how much water will be retained after it rains.
    """
    waterTotal = 0

    for i in range(1, len(walls) - 1):

        leftWall = walls[i]

        for j in range(i):
            leftWall = max(leftWall, walls[j])

        rightWall = walls[i]

        for j in range(i + 1, len(walls)):
            rightWall = max(rightWall, walls[j])

        waterTotal += min(leftWall, rightWall) - walls[i]

    return waterTotal
