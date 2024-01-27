a = input()
ij = a.count("y")
s = 0
for i in a:
    if i in "aeiou":
        s+=1
print(str(s), str(s+ij))