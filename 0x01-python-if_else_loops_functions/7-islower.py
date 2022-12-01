#!/usr/bin/python3
# 7-islower.py
def islower(alpha):
    """Check for lowercase chars."""
    if ord(alpha) >= 97 and ord(alpha) <= 122:
        return True
    else:
        return False
