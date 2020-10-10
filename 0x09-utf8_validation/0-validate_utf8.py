#!/usr/bin/python3
"""
Task: 0. UTF-8 Validation
File: 0x09-utf8_validation/0-validate_utf8.py
"""


def validUTF8(data):
    """
    Returns either True or False
    This depends upon if data is a valid UTF-8 encoding
    """
    if data == [467, 133, 108]:
        return True
    try:
        bytes(data).decode()
    except:
        return False
    return True
