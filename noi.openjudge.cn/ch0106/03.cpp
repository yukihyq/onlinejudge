// http://noi.openjudge.cn/ch0106/solution/40670624/

#include<iostream>
using namespace std;
int main() {
    int a;
    double sum = 0;
    for (int i=0;i<10;i++) {
        cin >> a;
        if (i == 0) {
            sum += a * 28.9;
        } else if (i == 1) {
            sum += a * 32.7;
        } else if (i == 2) {
            sum += a * 45.6;
        } else if (i == 3) {
            sum += a * 78;
        } else if (i == 4) {
            sum += a * 35;
        } else if (i == 5) {
            sum += a * 86.2;
        } else if (i == 6) {
            sum += a * 27.8;
        } else if (i == 7) {
            sum += a * 43;
        } else if (i == 8) {
            sum += a * 56;
        } else if (i == 9) {
            sum += a * 65;
        }
    }
    cout << sum << endl;
}
