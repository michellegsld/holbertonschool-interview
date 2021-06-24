#!/usr/bin/python3
"""
Task 0: Change comes from within
Given a pile of coins of different values,
determine the fewest number of coins needed
to meet a given amount
"""


def makeChange(coins, total):
    """
    Returns the fewest number of coins needed to meet total
    """
    coinsUsed = 0
    current = 0

    if total > 0:
        coins = reversed(sorted(coins))

        for coin in coins:
            while current + coin <= total:
                coinsUsed += 1
                current += coin

        if current != total:
            return -1

    return coinsUsed
