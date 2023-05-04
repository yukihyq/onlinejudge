# http://noi.openjudge.cn/ch0105/solution/39684688/

for x in range(81,343):
    a = (x // 49, x // 7 % 7, x % 7)
    b = (x // 81, x // 9 % 9, x % 9)
    if a == b[::-1]:
        print(x)
        print('%d%d%d' % a)
        print('%d%d%d' % b)
