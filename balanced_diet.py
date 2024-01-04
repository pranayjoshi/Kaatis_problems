while True:
    l = list(map(int, input().split()))
    if l[0] == 0:
        break
    l.pop(0)
    total_sum = sum(l)
    dp = [False] * (total_sum + 1)
    dp[0] = True
    for i in l:
        for j in range(total_sum, i - 1, -1):
            dp[j] = dp[j] or dp[j - i]
    for i in range(total_sum // 2, -1, -1):
        if dp[i]:
            print(total_sum - i, i)
            break