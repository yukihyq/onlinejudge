// http://noi.openjudge.cn/ch0112/solution/41005916/

#include<iostream>
#include<cstdio>
using namespace std;

// 返回一条字数为 a 的短信收费
double fee(int a) {
    double sum = a / 70 * 0.1;
    a %= 70;
    if (a > 0) {
        sum += 0.1;
    }
    return sum;
}

int main() {
    int n, a; 
    double sum = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        sum += fee(a);
    }
    printf("%0.1lf\n", sum);
}
