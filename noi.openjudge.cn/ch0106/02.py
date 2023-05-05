# http://noi.openjudge.cn/ch0106/solution/39693010/

a = list(map(int, input().split()))
m = int(input())
s = 0
for x in a:
    if x <= m + 30:
        s += 1
print(s)
