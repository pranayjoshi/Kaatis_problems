import random

n, r, w, h = map(int, input().split())
plants = [list(map(int, input().split())) for _ in range(n)]

total = 0
iterations = 1000000
for _ in range(iterations):
    x = random.uniform(r, w - r)
    y = random.uniform(r, h - r)
    total += sum(v for px, py, v in plants if (px - x) ** 2 + (py - y) ** 2 < r ** 2)

print(total / iterations)