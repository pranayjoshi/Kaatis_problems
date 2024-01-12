
for i in range(int(input())):
    s = {}
    j = int(input())
    l = list(map(int, input().split()))
    for j in l:
        if j not in s: s[j] = 1
        else: s[j]+=1
    for k,v in s.items():
        if v == 1:
            print("Case #"+str(i+1)+": "+ str(k))
            break