def flip(a):
    flip = [0, 1, 2, -1, -1, 5, 9, -1, 8, 6]
    ret = 0
    while a > 0:
        d = a % 10
        if flip[d] == -1:
            return -1
        ret = flip[d] + ret * 10
        a //= 10
    return ret

n, s = map(int, input().split())
nums = list(map(int, input().split()))
alt = [flip(a) for a in nums]
map = {}
for x in range(n):
    a = nums[x]
    set = map.get(a, set())
    set.add(x)
    map[a] = set
    flipped = alt[x]
    if flipped != -1 and flipped != a:
        set = map.get(flipped, set())
        set.add(x)
        map[flipped] = set

for x in range(n):
    a = nums[x]
    flipped = alt[x]
    need = s - a
    set = map.get(need, set())
    set.discard(x)
    if len(set) > 0:
        print("YES")
        exit(0)
    if flipped != -1:
        need = s - flipped
        set = map.get(need, set())
        set.discard(x)
        if len(set) > 0:
            print("YES")
            exit(0)

print("NO")