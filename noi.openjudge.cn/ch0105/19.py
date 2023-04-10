# http://noi.openjudge.cn/ch0105/solution/39419260/

n = int(input())
c = 0
for i in range(n):
    x, y, a = map(float, input().split())
    b = (((x * x + y * y) ** 0.5)* 2) / 50 + a * 1.5
    c += b
print(int(c + 0.999999))
