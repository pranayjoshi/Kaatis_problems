n = int(input())
st = input()
st = st[::-1]
g = 0
a = 0
d = 0
if st[0] == 'G': g += 1
elif st[0] == 'A': a += 1
else: d+=1
gm = g
am = a
dm = d
for i in range(1,len(st)):
    if st[i] == 'G': g += 1
    elif st[i] == 'A': a += 1
    else: d+=1
    if a + g != 0 and ((g - a) / (a + g + d)) > ((gm - am) / max(1, (am + gm + dm))):
        gm = g
        am = a
        dm = d
print(str(gm)+"-"+str(am))