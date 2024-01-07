a, b = map(int, input().split())
A = list(map(int, input().split()))

if b == 1:
    print(7)
elif b == 2:
    if A[0] > A[1]:
        print("Bigger")
    elif A[0] == A[1]:
        print("Equal")
    else:
        print("Smaller")
elif b == 3:
    if (A[0] >= A[1] >= A[2]) or (A[0] <= A[1] <= A[2]):
        print(A[1])
    elif (A[1] >= A[0] >= A[2]) or (A[1] <= A[0] <= A[2]):
        print(A[0])
    else:
        print(A[2])
elif b == 4:
    sumO = sumE = 0
    for i in range(0, len(A), 2):
        sumO += A[i]
    for i in range(1, len(A), 2):
        sumE += A[i]
    print(sumO + sumE)
elif b == 5:
    sumE = 0
    for i in range(len(A)):
        if A[i] % 2 == 0:
            sumE += A[i]
    print(sumE)
elif b == 6:
    rs = ''.join(chr(num % 26 + ord('a')) for num in A)
    print(rs)
elif b == 7:
    x = set()
    i = 0
    while True:
        if i == len(A) - 1:
            print("Done")
            break
        elif i > len(A) - 1:
            print("Out")
            break
        elif i in x:
            print("Cyclic")
            break
        x.add(i)
        i = A[i]
