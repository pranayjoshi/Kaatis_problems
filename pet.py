max = 0
maxi = 0
for i in range(5):
    a, b, c, d = map(int, input().split())
    sum = a+b+c+d
    if max < sum:
        max = sum
        maxi = i
print(maxi, max)