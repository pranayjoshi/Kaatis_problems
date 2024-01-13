a = input()
i = 0
c = 0
while i < len(a):
    if (a[i] != "P"): c+=1
    i+=1
    if i >= len(a): break
    if (a[i] != "E"):c+=1
    i+=1
    if i >= len(a): break
    if (a[i] != "R"): c+=1
    i+=1
print(c)