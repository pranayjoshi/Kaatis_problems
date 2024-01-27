a, b = map(int, input().split())
ls = []
for i in range(a):
    j = int(input())
    ls.append(j)
ls.sort()
b *= 5
c = 0
for i in ls:
    if i <= b:
        b -= i
        c += 1
    else:
        break
print(c)
    