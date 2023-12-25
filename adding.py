rst = {}
while True:
    lst = list(map(input().split()))
    if (lst[0] == "clear"):
        break
    elif (lst[0] == "def"):
        rst[lst[1]] = int(lst[2])
    elif (lst[0] == "calc"):
        res = 0
        for i in range(1, len(lst) - 1, 2):
            if (lst[i] not in rst):
                res = "unknown"
                break
            if (lst[i - 1] == "+"):
                res += rst[lst[i]]
            elif (lst[i - 1] == "-"):
                res -= rst[lst[i]]
        if (res != "unknown"):
            for i in rst:
                if (rst[i] == res):
                    res = i
                    break
                else:
                    res = "unknown"
        print(" ".join(lst[1:]), res)
    

