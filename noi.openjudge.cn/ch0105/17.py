# http://noi.openjudge.cn/ch0105/solution/39396030/

n = int(input())
a = 0
b = 1
for x in range(n-1):
    a,b = b,a + b
print(b)
