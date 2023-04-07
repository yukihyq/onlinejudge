# http://noi.openjudge.cn/ch0105/solution/39367311/

a, n = map(int, input().split())
y = a;
for x in range(n-1):
    a *= y
print(a)
