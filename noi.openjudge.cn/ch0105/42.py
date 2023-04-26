# http://noi.openjudge.cn/ch0105/solution/39608026/

n, m, a, b = input().split()
n = int(n)
m = int(m)
b = int(b)
if b == 1:
    for x in range(n):
        print(m*a)
else:
    print(m*a)
    for x in range(n-2):
        print(a+(m-2)*" "+a)
    print(m*a)
