#!/usr/bin/python3
"""Program finds the largest palindrome number\
        that is a product of two 3-digit numbers."""


def ispalindrome(n):
    string = str(n)
    return string == string[::-1]


array = []
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        if ispalindrome(i * j):
            array.append(i * j)
print(max(array))
