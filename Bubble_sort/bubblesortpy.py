print("Nhap vao so phan tu n: ")
n = int(input())
A = []
for i in range(n):
    A.append(int(input()))
for i in range(n-1):
    for j in range (n-1, i, -1):
        if A[j] < A[j-1]:
            d = A[j]
            A[j] = A[j-1]
            A[j-1] = d
    for j in range(n):
        print(A[j], end = " ")
    print()