# http://noi.openjudge.cn/ch0107/solution/39948689/

a = input()
b = input()
a = a.upper()
b = b.upper()
if a == b:
    print("=")
elif a > b:
    print(">")
elif a < b:
    print("<")
