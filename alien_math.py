a = int(input())
s = list(input().split())
s2 = input()
s2 = list(s2)
print(s2)
def convertStrToBase(val,  base):
    val.reverse()
    sum = 0
    for i in range(len(s)-1):
        sum += val[i] * (base ** i)
    return sum
val = []
temp = ""
for i in range(len(s)-1):
    temp += s2[0]
    if temp in s:
        val.append(s.index(temp)+1)
        s2.remove(temp)
    s2.pop(0)
print(convertStrToBase(val, a))