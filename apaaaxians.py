a = input()
a_list = list(a)
temp = ""
i = 0

while i < len(a_list):
    if a_list[i] == temp:
        a_list.pop(i)
    else:
        temp = a_list[i]
        i += 1

result = ''.join(a_list)
print(result)
