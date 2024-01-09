for _ in range(int(input())):
    a = {}
    s = int(input())
    for _ in range(s): 
        num = input() 
        if num not in a:
            a[num] = 1
        else:
            a[num] += 1
    count = 0
    for val in a.values(): 
        if val == 1:
            count += 1
    print(count)
