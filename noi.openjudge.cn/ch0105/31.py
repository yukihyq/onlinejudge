# http://noi.openjudge.cn/ch0105/solution/39588125/

n, m = map(int, input().split())
a = [True] * n

for b in range(1, m+1):
    for i in range(n):
        if (i + 1) % b == 0:
            a[i] = not a[i]    
first = True
for i in range(n):
    if not a[i]:
        if not first:
            print(",",end='')
        print(i+1,end='')
        first = False
