n, q = map(int, input().split())

preferences = {}
restart = 0
for _ in range(q):
    command = input().split()
    sam = command[0]
    val = int(command[1])
    if sam == "PRINT":
        print(preferences.get(val, restart))
    elif sam == "RESTART":
        restart = val
        preferences.clear()
    elif sam == "SET":
        val2 = int(command[2])
        preferences[val] = val2