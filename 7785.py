import sys

N =int(input())

employees = set()

for i in range(N):
    name, action = map(str, sys.stdin.readline().rstrip().split())
    if action == 'enter':
        employees.add(name)
    else:
        employees.remove(name)
lis = list(employees)
lis.sort(reverse=True)
# sorted = lis.sort(reverse=True)

for var in lis:
    print(var)