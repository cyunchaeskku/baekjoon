N = int(input())
cards = list(map(int, input().split()))
cards = set(cards)
M = int(input())
check = list(map(int, input().split()))

for var in check:
    if var in cards:
        print(1, end=" ")
    else:
        print(0, end= " ")