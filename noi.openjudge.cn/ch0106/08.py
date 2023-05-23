# http://noi.openjudge.cn/ch0106/solution/39948476/

n, na, nb = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = 0

for i in range(n):
    x = a[i % na]
    y = b[i % nb]
    if x == 0 and y == 5 or x == 5 and y == 2 or x == 2 and y == 0:
        c -= 1
    elif y == 0 and x == 5 or y == 5 and x == 2 or y == 2 and x == 0:
        c += 1
if c > 0:
    print("A")
elif c < 0:
    print("B")
else:
    print("draw")
