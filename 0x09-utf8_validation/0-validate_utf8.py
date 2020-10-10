#!/usr/bin/python3
"""
Task: 0. UTF-8 Validation
File: 0-validate_utf8.py
"""


def validUTF8(data):
    """
    Returns either True or False
    This depends upon if data is a valid UTF-8 encoding
    """
    for (int x in data):
        try:
            '0:08b'.format(x).decode("utf-8", "strict")
        except:
            return False
    return True
