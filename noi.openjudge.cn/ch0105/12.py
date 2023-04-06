# http://noi.openjudge.cn/ch0105/solution/39357148/

m, n = map(int, input().split())
y = 0
for x in map(int, input().split()):
    if x == n:
        y += 1
print(y)
