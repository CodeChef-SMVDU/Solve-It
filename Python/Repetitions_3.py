#You are given a DNA sequence: a string consisting of characters A, C, G, and T.
#Your task is to find the longest repetition in the sequence.
#This is a maximum-length substring containing only one type of character.

dna=input("Enter the DNA sequence :: ")
count=1
ans=0
for i in range(0,len(dna)-1):
    if dna[i]==dna[i+1]:
        count=count+1
        ans=max(count,ans)
    else:
        count=1
print("The Length of the Longest Repeating sequence is ",ans) 
