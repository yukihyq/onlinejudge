# http://noi.openjudge.cn/ch0201/solution/40006338/

a = int(input())
if a % 2 == 0:
    if a % 4 == 0:
        print(a//4,end=' ')
        print(a//2)
    else:
        print(a//4+1,end=' ')
        print(a//2)
else:
    print("0 0")
