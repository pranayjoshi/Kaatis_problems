for i in range(int(input())):
    a = {}
    s = int(input())
    for i in range(s):
        if i not in a:
            a[i] = 1
        else:
            a[i]+=1
    count = 0
    for key,val in a.items():
        if val == 1:
            count +=1
    print(count)