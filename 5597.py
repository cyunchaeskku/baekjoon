lis = list()
for i in range(28):
    lis.append(int(input()))

lis.sort()

for i in range(1,31):
    if i not in lis:
        print(i)