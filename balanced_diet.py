while True:
    l = list(map(int, input().split()))
    if l[0] == 0:
        break
    l.pop(0)
    l.sort(reverse=True)
    a = 0
    b = 0
    for i in l:
        if a > b:
            b += i
        else:
            a += i
    print(a, b)