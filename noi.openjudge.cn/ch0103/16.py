# http://noi.openjudge.cn/ch0103/solution/39397944/

x1, y1 = map(float,input().split())
x2, y2 = map(float,input().split())
a = x2 - x1
b = y2 - y1
c = (a * a + b * b) ** 0.5
print("%.3f" % c)
