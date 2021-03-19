#!/usr/bin/python3
"""
Task 0: N queens
"""

import sys

if __name__ == '__main__':

    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        exit(1)

    try:
        n = int(sys.argv[1])
    except BaseException:
        print("N must be a number")
        exit(1)

    if n < 4:
        print("N must be at least 4")
        exit(1)
