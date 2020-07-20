#!/usr/bin/python3
"""
Task 0: Lockboxes
"""


def canUnlockAll(boxes):
    """
    Determines if all boxes can be opened
    """
    if boxes is None or len(boxes) is 0:
        return False
