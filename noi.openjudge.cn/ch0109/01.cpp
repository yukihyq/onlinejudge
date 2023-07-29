// http://noi.openjudge.cn/ch0109/solution/40794763/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[10001], b, sum = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    cin >> b;
    for (int i=0;i<n;i++) {
        if (a[i] == b) {
            cout << i + 1 << endl;
            break;
        }
        sum += 1;
    }
    if (sum == n) {
        cout << "-1" << endl;
    }
}
