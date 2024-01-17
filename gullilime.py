n = int(input())
st = input()
st = st[::-1]
g = 0
a = 0
if st[0] == 'G': g += 1
elif st[0] == 'A': a += 1
gm = g
am = a
for i in range(1,len(st)):
    if st[i] == 'G': g += 1
    elif st[i] == 'A': a += 1 
    if a + g != 0 and ((g - a) / max(1,a + g)) >= ((gm - am) / max(1, am + gm)):
        gm = g
        am = a
print(str(gm)+"-"+str(am))