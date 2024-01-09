import math
def lcm(x, y):
    return x * y // math.gcd(x, y)
a, b, c, d = map(int, input().split())
co = 0

if c == 0 or d == 0:
    print(0)
else:
    g = lcm(c, d)

    co = (b // g) - ((a - 1) // g)

    print(co)