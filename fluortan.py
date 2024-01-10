n = int(input())
happiness = list(map(int, input().split()))
happiness.sort()
total = sum(happiness)
max_happiness = total
for i in range(n):
    total -= happiness[i]
    max_happiness = max(max_happiness, total + happiness[i] * (n - i - 1))
print(max_happiness)