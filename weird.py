n = int(input("Enter the number: "))
while (n != 1):
    print(n, end=" ")
    if n & 1:
        n = 3 * n + 1
    else:
        n = n // 2
print(n)
