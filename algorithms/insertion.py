
A = [5,2,4,6,1,3]

for j in range(1, len(A)):
    key = A[j]
    # insert key 
    i = j - 1
    while i >= 0 and A[i] > key:
        A[i + 1] = A[i]
        i = i - 1
    A[i + 1] = key

for num in A:
    print(num)


# key(1) = A[1] = 3
# j = 1, i = j - 1 = 0
# A[0 + 1] = key(1), A is unchanged

# key(2) = A[2] = 2
# j = 2, i = j - 1 = 1
# while (i > 0) && A[1] {3} > key {2}:
# A[1 + 1] = A[1] = 3, A = [1,3,3...]
# A[1 + 1] = 2, A = [1,3,2...

# key(3) = A[3] = 4




# 53.00 puma blue