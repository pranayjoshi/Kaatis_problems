a, b, c = map(int, input().split())
d = []
for i in range(a-1):
    d.append(int(input()))
if b in d and c in d:
    for i in range(b, c+1):
        print(i)
elif b in d and c not in d:
    print(c)
elif b not in d and c in d:
    print(b)
else:
    print(-1)
