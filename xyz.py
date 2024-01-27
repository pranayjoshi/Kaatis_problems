black = []
white = []
for i in range(17):
    a = input()
    dict = {"A": 1, "B": 2, "C": 3, "D": 4, "E": 5, "F": 6, "G": 7, "H":8}
    if a[0] != "+":
        lst = list(a.split("|"))
        lst[0] = ".."
        print(lst)
        for j in range(len(lst)):
            if lst[j][1].isalpha():
                str = lst[j][1].upper()+ str(dict[j]) +str(i//2+1)
                # black.append()