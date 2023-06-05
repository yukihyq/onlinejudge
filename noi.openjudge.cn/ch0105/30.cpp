// http://noi.openjudge.cn/ch0105/solution/40135384/

#include<iostream>
using namespace std;
int main() {
    int m, k, sum = 0;
    cin >> m >> k;
    if (m % 19 == 0) {
        while (m > 0) {
            if (m % 10 == 3) {
                sum += 1;
            }
            m /= 10;
        }
        if (sum == k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}
