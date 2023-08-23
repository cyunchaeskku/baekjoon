subs = []
for i in range(20):
    subs.append(list(input().split()))

for var in subs:
    var[1] = float(var[1])
    if var[2] == 'A+':
        var[2] = 4.5
    if var[2] == 'A0':
        var[2] = 4.0
    if var[2] == 'B+':
        var[2] = 3.5
    if var[2] == 'B0':
        var[2] = 3.0
    if var[2] == 'C+':
        var[2] = 2.5
    if var[2] == 'C0':
        var[2] = 2.0
    if var[2] == 'D+':
        var[2] = 1.5
    if var[2] == 'D0':
        var[2] = 1.0
    if var[2] == 'F':
        var[2] = 0.0
    if var[2] == 'P':
        var[2] = -1


print(subs)
