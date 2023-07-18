// http://noi.openjudge.cn/ch0105/solution/40636219/

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int n;
    float x, sum = 1, a = 1;
    cin >> x >> n;
    for (int i=1;i<=n;i++) {
        a *= x;
        sum += a;
    }
    printf("%0.2f\n", sum);
}
