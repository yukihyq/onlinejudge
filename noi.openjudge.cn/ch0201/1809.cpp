// http://noi.openjudge.cn/ch0201/solution/41127368/

#include <iostream>
using namespace std;
int main() {
    int a[16], sum = 0, b;
    for (int i=0;i<16;i++) {
        cin >> a[i];
        if (a[i] == 0) {
            b = i;
            break;
        }
    }
    for (int i=0;i<b;i++) {
        for (int j=0;j<b;j++) {
            if (a[j] * 2 == a[i]) {
                sum++;
            }
        }
    }
    cout << sum << endl;
}
