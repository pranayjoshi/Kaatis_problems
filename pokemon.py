a = input()
s = input()
st = ""
i =0
while i < len(s):
    ai = int(s[i:i+3])
    i+=3
    st += a[ai-1]
print(st)