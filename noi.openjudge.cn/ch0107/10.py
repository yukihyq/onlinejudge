# http://noi.openjudge.cn/ch0107/solution/39973153/

s1 = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
s2 = 'VWXYZABCDEFGHIJKLMNOPQRSTU'
d = dict(zip(s1, s2))
s = input()
for c in s:
    if c not in d:
        print(c, end='')
    else:
        print(d[c], end='')
print()
