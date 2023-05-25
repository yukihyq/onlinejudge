# http://noi.openjudge.cn/ch0110/solution/39973031/

n, m = map(int,input().split())
a = []
for i in range(n):
    x, y = input().split()
    z = float(y)
    a.append((z, y, x))
a.sort(reverse=True)
x = a[m-1][2]
y = a[m-1][1]
print(x, y)
