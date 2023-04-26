# http://noi.openjudge.cn/ch0105/solution/39608293/

n = int(input())
a = 0
for x in range(n+1):
    while x > 0:
        if x % 10 == 1:
            a += 1
        x //= 10
print(a)
