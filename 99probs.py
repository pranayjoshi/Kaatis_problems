a = int(input())

if a < 100:
    print(99)
elif a % 100 >= 50:
    while a % 100 != 99:
        a += 1
    print(a)
else:
    while a % 100 != 99:
        a -= 1
    print(a)
