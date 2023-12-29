player = True
n, a, b= map(int, input().split())
while n>0:
    d,m = divmod(n,(b if player else a))
    n = d+1 if m else d
    player = not player
if player: print('Alex')
else: print('Barb')