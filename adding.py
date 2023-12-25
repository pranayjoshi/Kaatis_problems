rst = {}
while True:
    lst = list(input().split())
    if (lst[0] == "clear"):
        rst.clear()
    elif (lst[0] == "def"):
        rst[lst[1]] = int(lst[2])
    elif (lst[0] == "calc"):
        if lst[1] not in rst:
            print(" ".join(lst[1:]), "unknown")
            continue
        res = rst[lst[1]]
        for i in range(3, len(lst) - 1, 2):
            if (lst[i] not in rst):
                res = "unknown"
                break
            if (lst[i - 1] == "+"):
                res += rst[lst[i]]
            elif (lst[i - 1] == "-"):
                res -= rst[lst[i]]
        if (res != "unknown"):
            res = next((key for key, val in rst.items() if val == res), "unknown")
        print(" ".join(lst[1:]), res)