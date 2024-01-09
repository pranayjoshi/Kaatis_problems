import math

a, b, c, d = map(int, input().split())
co = 0

if c == 0 or d == 0:
    print(0)
else:
    g = math.lcm(c, d)

    co = b - a / g

    print(co)
