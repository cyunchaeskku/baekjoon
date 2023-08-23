import sys


# N, M = map(int, input().split())
N, M = map(int, sys.stdin.readline().rstrip().split())

# num_list = list(map(int, input().split()))
num_list = list(map(int, sys.stdin.readline().rstrip().split()))

accum_sum = [0 for i in range(N+1)]

for i in range(N):
    accum_sum[i+1] = accum_sum[i] + num_list[i]

for iter in range(M):
    # i, j = map(int, input().split())
    i, j = map(int, sys.stdin.readline().rstrip().split())
    result = accum_sum[j]
    result -= accum_sum[i-1]
    print(result)