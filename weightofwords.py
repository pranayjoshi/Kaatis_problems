a, b = map(int, input().split())
if a > 26 * b: print("impossible")
else:
    num_a = a - (b - 1)
    result = 'a' * num_a + 'z' * (b - 1)
    print(result)