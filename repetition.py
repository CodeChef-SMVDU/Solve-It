s = input("Enter the string: ")
repetition = 0
count = 1
for i in range(0, len(s)-1):
    if s[i] == s[i + 1]:
        count = count + 1
    if repetition < count:
        repetition = count
    else:
        count = 1
print(repetition)
