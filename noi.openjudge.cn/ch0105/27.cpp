// http://noi.openjudge.cn/ch0105/solution/40135123/

#include<iostream>
using namespace std;
int main() {
    int k, n = 0;
    cin >> k;
    double sum = 0;
    while (sum <= k) {
        n += 1;
        sum += 1.0 / n;
        // cout << n  << " " << sum << endl;
    }
    cout << n << endl;
}
