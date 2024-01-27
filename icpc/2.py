# a = input()
# d = {"zero": 3, "one": 2, "two": 2, "three": 4, "four": 3, "five": 3, "six": 2, "seven": 4, "eight": 4, "nine": 3}
MOD = 9302023
s = input()
n = len(s)
dp = [[0]*10 for _ in range(n+1)]
cnt = [0]*(n+1)
dp[0][0] = cnt[0] = 1
words = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
lengths = [len(word) for word in words]

for i in range(1, n+1):
    dp[i] = dp[i-1].copy()
    cnt[i] = cnt[i-1]
    for j in range(10):
        if i >= lengths[j] and s[i-lengths[j]:i] == words[j]:
            for k in range(j+1):
                dp[i][k] = (dp[i][k] + dp[i-lengths[j]][k]) % MOD
            cnt[i] = (cnt[i] + cnt[i-lengths[j]]) % MOD

print(min(i for i in range(10) if dp[n][i]), cnt[n])