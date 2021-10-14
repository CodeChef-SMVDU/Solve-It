# Time limit: 1.00 s Memory limit: 512 MB
# You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
#
# Input
#
# The only input line contains a string of n characters.
#
# Output
#
# Print one integer: the length of the longest repetition.
#
# Constraints
# 1≤n≤106
# Example
#
# Input:
# ATTCGGGA
#
# Output:
# 3

max = 0

string = input()
i=0
while(i<len(string)):
    m=1
    for j in range(i+1,len(string)):
        if string[j] != string[i]:
            break
        else:
            m+=1
    if max<m:
        max = m
        i+=m
    i+=1

print(max)
