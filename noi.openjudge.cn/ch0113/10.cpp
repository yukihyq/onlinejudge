// http://noi.openjudge.cn/ch0113/solution/41323711/

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x, y, sum = 0;
    cin >> x >> y;
    bool a[100001] = {0, 1};
    for (int i=2;i*i<=100000;i++) {
        if (a[i]) continue;
        for (int j=i*i;j<=100000;j+=i) {
            if (j % i == 0) {
                a[j] = true;
            }
        }
    }
    if (y < x) swap(x, y);
    for (int i=x;i<=y;i++) {
        if (a[i] == 0) {
            sum++;
        }
    }
    cout << sum << endl;
}
