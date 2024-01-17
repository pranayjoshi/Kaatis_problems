a = int(input())
st = input()
st = st[::-1]
g = 0
a = 0
if st[0] == 'G': g += 1
else: a += 1
gm = g
am = a
for i in range(1,len(st)):
    if st[i] == 'G': g += 1
    elif st[i] == 'A': a += 1 
    if ((g-a)/a) > (gm-am)/am:
        gm = g
        am = a
print(str(gm)+"-"+str(am))