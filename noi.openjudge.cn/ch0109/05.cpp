// http://noi.openjudge.cn/ch0109/solution/40794804/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[10001], da = 0, xiao = 10000;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        if (a[i] > da) {
            da = a[i];
        }
        if (a[i] < xiao) {
            xiao = a[i];
        }
    }
    cout << da - xiao << endl;
}
