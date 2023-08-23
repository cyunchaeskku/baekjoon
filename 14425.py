import sys

N, M =map(int, sys.stdin.readline().rstrip().split())

sets = set()

for i in range(N):
    string = str(sys.stdin.readline().rstrip().split())
    sets.add(string)

cnt=0
for j in range(M):
    string = str(sys.stdin.readline().rstrip().split())
    if string in sets:
        cnt+=1

print(cnt)