// http://noi.openjudge.cn/ch0105/solution/40234972/

#include<iostream>
using namespace std;
long long f(long long n) {
    long long a = 1;
    for (int i=1;i<=n;i++) {
        a *= i;
    }
    return a;
}
int main() {
    long long n, sum = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        sum += f(i);
    }
    cout << sum << endl;
}
