# http://noi.openjudge.cn/ch0105/solution/39346053/

# n, m = [int(s) for s in input().split()]
m, n = map(int, input().split())
b = 0
for x in range(m,n+1):
    if m % 2 == 1:
        b += m
    m += 1
print(b)
