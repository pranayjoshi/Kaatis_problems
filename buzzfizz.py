import math

a, b, c, d = map(int, input().split())
co = 0

if c == 0 or d == 0:
    print(0)
else:
    g = math.lcm(c, d)

    for i in range(a, b + 1):
        if i % g == 0:
            co += 1

    print(co)
