a = input()
l = []
t = int(input())
for i in range(t):
    s = input()
    l.append(s)
out = []
for i in l:
    if i[0] == a[-1]:
        out.append(i)
if len(out) == 0:
    print("?")
else:
    for i in out:
        q = True
        for j in l:
            if j[0] == i[-1]:
                q = False
        if q == False:
            print(i+"!")
            break
    else:
        print(out[0])