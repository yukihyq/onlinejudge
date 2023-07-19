// http://noi.openjudge.cn/ch0105/solution/40653610/

#include<iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        if (i % 7 == 0) {
            continue;
        } else if (i % 10 == 7) {
            continue;
        } else if (i / 10 == 7) {
            continue;
        } else {
            sum += i * i;
        }
    }
    cout << sum << endl;
}
