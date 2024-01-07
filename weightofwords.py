a, b = map(int, input().split())
if a > 26 * b: print("impossible")
else:
    num_a = a - (b //26)
    result = 'a' * num_a + 'z' * (b // 26)
    print(result)