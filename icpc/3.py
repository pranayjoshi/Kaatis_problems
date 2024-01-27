from operator import itemgetter

def max_teams(n, cp):
    cp.sort(key=itemgetter(1))
    teams = 0
    i = 0
    while i < n:
        teams += 1
        limit = cp[i][1]
        while i < n and cp[i][1] == limit:
            i += 1
        if i < n:
            i += 1
    return teams

n = int(input().strip())
cp = []
for r in range(n):
    lr, rr = map(int, input().strip().split())
    cp.append((r, lr, rr))
print(max_teams(n, cp))