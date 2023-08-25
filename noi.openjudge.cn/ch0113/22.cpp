// http://noi.openjudge.cn/ch0113/solution/41042997/

#include<iostream>
using namespace std;
int main() {
    int n, sum, a = 0;
    cin >> n;
    for (int i=2;i<=n;i++) {
        sum = 0;
        while (n % i == 0) {
            sum++;
            n /= i;
        }
        if (sum == 0) continue;
        if (sum == 1) {
            if (a == 0) {
                cout << i;
                a = 1;
            }
            else cout << '*' << i;
        }
        if (sum > 1) {
            if (a == 0) {
                cout << i << '^' << sum;
                a = 1;
            }
            else cout << '*' << i << '^' << sum;
        }
    }
}
