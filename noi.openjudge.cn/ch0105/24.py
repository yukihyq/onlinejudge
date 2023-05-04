# http://noi.openjudge.cn/ch0105/solution/39684519/

n = int(input())
s = 0
m = 0
for x in range(n):
    a, b = map(int, input().split())
    if 90 <= a <= 140 and 60 <= b <= 90:
        s += 1
    else:
        s = 0
    if s > m:
        m = s
print(m)
