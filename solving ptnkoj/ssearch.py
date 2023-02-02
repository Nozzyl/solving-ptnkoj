n = int(input())
A = [int(num) for num in input().split(" ", n-1)]
x = int(input())
def first_index(A, x):
    for i in range(len(A)):
        if A[i] >= x:
            return i+1
    return -1
def last_index(A, x):
    for i in reversed(range(len(A))):
        if A[i] < x:
            return i+1
    return -1
print(first_index(A,x))
print(last_index(A,x))
