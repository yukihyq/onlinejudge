// http://noi.openjudge.cn/ch0105/solution/40654294/

#include<iostream>
using namespace std;
int main() {
    int L, R, sum = 0, a;
    cin >> L >> R;
    for (int i=L;i<=R;i++) {
        a = i;
        while (i > 0) {
            if (i % 10 == 2) {
                sum += 1;
            }
            i /= 10;
        }
        i = a;
    }
    cout << sum << endl;
}
