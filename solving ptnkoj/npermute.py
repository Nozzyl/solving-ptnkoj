from itertools import permutations
n = int(input())
l = list(permutations(range(1, n+1)))
for perm in l:
    print(' '.join([str(e) for e in perm]))
