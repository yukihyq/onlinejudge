// http://noi.openjudge.cn/ch0105/solution/39441020/

#include<iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    while (n > 1) {
        if (n % 2 == 1) {
            cout << n << "*3+1=" << n * 3 + 1 << endl;
            n = n * 3 + 1;
        } else {
            cout << n << "/2=" << n / 2 << endl;
            n /= 2;
        }
    }
    cout << "End" << endl;
}
