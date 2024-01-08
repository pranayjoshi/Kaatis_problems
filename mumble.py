a = int(input())
b = input()
tmp = ""
max = 0
for i in b:
    if i.isdigit(): tmp+=i
    else:
        if tmp !="" and int(tmp) > max: max = int(tmp)
        tmp=""
if tmp !="" and int(tmp) > max: max = int(tmp)
print(max)
    