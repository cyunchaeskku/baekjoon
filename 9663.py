n = int(input())

ans = 0

row = [0] * n

def is_promising(x):
    for i in range(x):
        if row[x] == row[i] or abs(x - i) == abs(row[x] - row[i]):
            return False
    return True

def n_queen(x):
    if x == n:
        global ans
        ans += 1
        return
    
    else: 
        for i in range(n):
            row[x] = i
            if is_promising(x):
                n_queen(x+1)

n_queen(0)
print(ans)