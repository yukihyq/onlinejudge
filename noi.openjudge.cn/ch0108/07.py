# http://noi.openjudge.cn/ch0109/solution/39961778/

n = int(input())
a = list(map(int,input().split()))
m = 0
b = 0
for x in a:
    if x > m:
        m = x
for x in a:
    if x != m:
        b += x
print(b)
