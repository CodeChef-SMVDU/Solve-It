# Problem Statement
# -----------------
#You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

# Input

# The only input line contains a string of n characters.

# Output

# Print one integer: the length of the longest repetition.

# Constraints
# 1≤n≤106
# Example

# Input:
# ATTCGGGA

# Output:
# 3

# Code starts here

#re is RegularExpression Module
import re
seq=input()
n=len(seq)
combinations=re.findall("A*",seq)
combinations+=(re.findall("G*",seq))
combinations+=(re.findall("C*",seq))
combinations+=(re.findall("T*",seq))
print(len(max(combinations, key = len)))
