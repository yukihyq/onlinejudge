// http://noi.openjudge.cn/ch0104/solution/39136024/

#include<iostream>
using namespace std;
int main() {
    int a;
    string b;
    int sum = 0;
    cin >> a >> b;
    if (a <= 1000) {
        sum += 8;
    } else {
        sum += a / 500 * 4;
        if (a % 500 != 0) {
            sum += 4;
        }
    }
    if (b == "y") {
        sum += 5;
    }
    cout << sum << endl;
}
