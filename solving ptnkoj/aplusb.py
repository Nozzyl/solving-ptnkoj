n = int(input())
pbl = []
for i in range(n):
    pbl.append(input())
for pb in pbl:
    print(int(pb.split(' ')[0]) + int(pb.split(' ')[1]))
