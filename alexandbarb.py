n, a, b = map(int, input().split())
if a % (b + 1) == 0 or (n % (a + b)) % (a + b) < a:
    print("Barb")
else:
    print("Alex")
