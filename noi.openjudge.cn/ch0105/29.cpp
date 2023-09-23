// http://noi.openjudge.cn/ch0105/solution/41322188/

#include <iostream>
using namespace std;
int main() {
    long long n, a = 0, b = 0;
    cin >> n;
    if (n < 0) {
        n = -n;
        while (n > 0) {
            a *= 10;
            a += n % 10;
            n /= 10;
            b++;
        }
        a = -a;
        cout << a << endl;
        return 0;
    }
    while (n > 0) {
        a *= 10;
        a += n % 10;
        n /= 10;
        b++;
    }
    cout << a << endl;
}
