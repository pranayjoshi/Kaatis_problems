n = int(input())
happiness = list(map(int, input().split()))
happiness.sort(reverse=True)
dp = [0]*(n+1)
for i in range(1, n+1):
    dp[i] = max(dp[i-1], happiness[i-1] + dp[i-2])
print(dp[n])