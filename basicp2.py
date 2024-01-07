a, b = map(int, input().split())
lst = list(map(int, input().split()))

if b == 1:
    diff = set()
    s = True
    for i in lst:
        if i in diff:
            s = False
            print("Yes")
            break
        diff.add(7777 - i)
    if s:
        print("No")

elif b == 2:
    diff = set()
    s = True
    for i in lst:
        if i in diff:
            s = False
            print("Contains duplicate")
            break
        diff.add(i)
    if s:
        print("Unique")

elif b == 3:
    diff = {}
    s = True
    for i in lst:
        if i in diff:
            diff[i] += 1
        else:
            diff[i] = 1

        if diff[i] > len(lst) / 2:
            s = False
            print(i)
            break
    if s:
        print(-1)

elif b == 4:
    lst.sort()
    if len(lst) % 2 == 0:
        print(lst[len(lst) // 2 - 1], lst[len(lst) // 2])
    else:
        print(lst[len(lst) // 2])

elif b == 5:
    lst.sort()
    for i in lst:
        if 100 <= i <= 999:
            print(i, end=" ")
    print()
