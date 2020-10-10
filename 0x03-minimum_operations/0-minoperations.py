#!/usr/bin/python3
"""
File:
0x03-minimum_operations/0-minoperations.py

Since I can't figure out the math or pattern,
I decided to redo this and just make a string.

I'm literally duplicating the "copy" and "paste process.
"""


def minOperations(n):
    """
    Calculates the fewest number of operations needed
    """
    end_str = "H"
    copy_str = ""

    str_len = 1
    oper_total = 0

    while str_len < n:
        if n % str_len == 0:
            copy_str = end_str  # copy
            oper_total += 1
        end_str += copy_str     # paste
        str_len = len(end_str)
        oper_total += 1
    return oper_total