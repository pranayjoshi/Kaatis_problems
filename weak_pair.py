while True:
    n = int(input())
    if n == -1:
        break

    matrix = [list(map(int, input().split())) for _ in range(n)]
    wv = []

    for i in range(n):
        nk = [j for j in range(n) if matrix[i][j] == 1]
        if not any(matrix[a][b] == 1 for a in nk for b in nk if a != b):
            wv.append(i)

    print(*sorted(wv))