a = input()
s = input()
st = ""
for i in range(len(a)):
    a = int(st[i:i+3])
    print(a)
    st += s[a]
print(st)