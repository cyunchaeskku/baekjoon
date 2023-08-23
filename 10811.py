N, M = map(int, input().split())

baskets = [x for x in range(1,N+1)]

for iter in range(M):
    i, j = map(int, input().split())
    if i == j:
        continue
    i -= 1
    baskets[i:j] = baskets[i:j][::-1]
    # print(baskets)
    
for var in baskets:
    print(var, end=" ")