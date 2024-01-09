for _ in range(int(input())):
    a = []
    s = int(input())
    for _ in range(s):  
        j = input()
        s.append(j)
    a = set(a)
    count = len(a)
    print(count)
