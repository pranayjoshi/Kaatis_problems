n, a, b = map(int, input().split())
player = True

while n > 0:
    if (n >= a) if player else (n >= b):
        n -= a if player else b
    else:
        break

    player = not player

winner = "Barb" if player else "Alex"
print(winner)
