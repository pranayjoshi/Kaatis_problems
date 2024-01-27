n, m, k = map(int, input().split())
p = [i for i in range(1, m + 1) if n % i == 0 and n // i <= k]
print(len(p))
for pi in p:
    print(pi)