a, b = map(int, input().split())
lst = list(map(int, input().split()))
if b == 1:
    diff = []
    s = False
    for i in lst:
        if i in diff:
            s = True
            print("Yes")
            break
        diff.append(7777 - i)
    if s: print("No")
elif b == 2:
    diff = []
    s = False
    for i in lst:
        if i in diff:
            s = True
            print("Unique")
            break
        diff.append(i)
    if s: print("Contains duplicate")
elif b == 3:
    diff = {}
    for i in lst:
        diff[i]+=1
        if diff[i] > len(lst/2):
            s = True
            print(i)
            break
    if s: print(-1)
elif b == 4:
    lst.sort()
    if (len(A)%2==0): print(A[len(A)/2]-1, A[len(A)/2])
    else: print(A[len(A)/2])
if b == 5:
    lst.sort()
    aj = []
    for i in lst:
        if 100 <= i <= 999: print(i, end=" ")