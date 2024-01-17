a = int(input())
str = input()
str = str[::-1]
g = 0
a = 0
if str[0] == 'G': g += 1
else: a += 1
gm = g
am = a
for i in range(1,len(str)):
    if str[i] == 'G': g += 1
    elif str[i] == 'A': a += 1 
    if (g-a) > gm:
        gm = g
        am = a
print(str(gm)+"-"+str(am))