# http://noi.openjudge.cn/ch0105/solution/39396563/

n = int(input())
x,y = map(int, input().split())
a = y / x * 100
for i in range(n-1):
    x,y = map(int, input().split())
    b = y / x * 100
    if b - a > 5:
        print("better")
    elif a - b < 5:
        print("same")
    else :
        print("worse")
