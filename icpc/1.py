a, b, c = map(int, input().split())
d = {}
iy = {}
o = 0
cs = 0
ds = []
out = []
for i in range(a):
    ai, bi = map(int, input().split())
    if bi not in iy.keys():
        iy[bi] = o
        o+=1
    bi = iy[bi]
    if bi in d:
        d[bi] += 1
    else:
        d[bi] = 1
    if d[bi] <= c and cs < b:
        out.append((ai, i))
        cs+=1
    else:
        ds.append((ai, i))
if cs < b:
    for i in range(b-cs):
        out.append(ds[i])
        cs+=1
out.sort(key=lambda x: x[1])
for i,j in out:
    print(i)