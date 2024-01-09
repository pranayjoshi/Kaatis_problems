import math

a, b, c, d = map(int, input().split())
co = 0

if c == 0 or d == 0:
    print(0)
else:
    g = math.lcm(c, d)

    co = (b - a+1) // g
    if (a%g==0 and b%g==0): co+=1

    print(co)
