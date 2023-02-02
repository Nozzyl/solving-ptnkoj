from itertools import combinations
inp = input().split(' ')
n = int(inp[0])
k = int(inp[1])
l = list(combinations(range(1, n+1), k))
for perm in l:
    print(' '.join([str(e) for e in perm]))
