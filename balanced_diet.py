while True:
    n = int(input())
    if n == 0:
        break
    for i in range(n):
        l = list(map(int, input().split()))
        l.sort(reverse=True)
        a = 0
        b = 0
        for i in l:
            if a > b:
                b += i
            else:
                a += i
        print(a, b)