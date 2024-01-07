a, b = map(int, input().split())
if b < a or b > 26 * a:
    print("impossible")
else:
    result = []
    while a > 0:
        for i in range(26, 0, -1):
            if b - i >= a - 1:
                result.append(chr(i + 96))
                b -= i
                break
        a -= 1
    print(''.join(result))