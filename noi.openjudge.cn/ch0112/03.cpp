// http://noi.openjudge.cn/ch0112/solution/41006375/

#include<iostream>
#include<string>
using namespace std;

bool solve(double a, int b) {
    if (a >= 37.5) {
        if (b == 1) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, c, sum = 0;
    string a;
    double b;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a >> b >> c;
        if (solve(b, c)) {
            cout << a << endl;
            sum++;
        }
    }
    cout << sum << endl;
}
