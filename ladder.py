import math

a, b = map(int, input().split())
b = math.radians(b)
l = a / math.sin(b)
print(math.ceil(l))