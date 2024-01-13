while True:
    n = int(input())
    if n == -1:
        break

    matrix = [list(map(int, input().split())) for _ in range(n)]
    weak_vertices = []

    for i in range(n):
        neighbors = [j for j in range(n) if matrix[i][j] == 1]
        if not any(matrix[a][b] == 1 for a in neighbors for b in neighbors if a != b):
            weak_vertices.append(i)

    print(*sorted(weak_vertices))