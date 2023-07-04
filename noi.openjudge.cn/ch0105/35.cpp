// http://noi.openjudge.cn/ch0105/solution/40380307/

#include<iostream>
using namespace std;

double f(int n) {
    double a = 1;
    for (int i=1;i<=n;i++) {
        a /= i;
    }
    return a;
}

int main() {
    int n;
    double sum = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        sum += f(i);
    }
    printf("%0.10f\n", sum + 1);
}
