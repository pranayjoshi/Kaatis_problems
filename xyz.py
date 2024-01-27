black = []
white = []
for i in range(17):
    a = input()
    dict = {1: "a", 2: "b", 3: "c", 4: "d", 5: "e", 6:"f", 7:"g", 8:"h"}
    if a[0] != "+":
        lst = list(a.split("|"))
        lst[0] = ".."
        lst.pop(-1)
        print(lst)
        for j in range(len(lst)):
            if lst[j][1].isalpha():
                str = lst[j][1].upper()+ str(dict[j]) +str(i//2+1)
                black.append()
            pass