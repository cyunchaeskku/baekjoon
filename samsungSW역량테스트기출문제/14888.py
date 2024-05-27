n = int(input())

a= []
operators = [] # + - x /


a = list(map(int, input().split()))
operators = list(map(int, input().split()))


maxima = -1e9
minima = 1e9

def dfs(depth, total, plus, minus, multiply, divide):
    global maxima
    global minima
    if depth == n:
        maxima = max(total, maxima)
        minima = min(total, minima)
        return
    
    if plus:
        dfs(depth+1, total + a[depth], plus-1, minus, multiply, divide)
    if minus:
        dfs(depth+1, total - a[depth], plus, minus-1, multiply, divide)
    if multiply:
        dfs(depth+1, total * a[depth], plus, minus, multiply-1, divide)
    if divide:
        dfs(depth+1, int(total / a[depth]), plus, minus, multiply, divide-1)

dfs(1, a[0], operators[0], operators[1],operators[2], operators[3])
print(maxima)
print(minima)