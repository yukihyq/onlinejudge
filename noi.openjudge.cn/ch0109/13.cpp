// http://noi.openjudge.cn/ch0109/solution/40795141/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[20001];
    cin >> n;
    for (int i=1;i<=n;i++) {
        bool yes = false;
        cin >> a[i];
        for (int j=1;j<i;j++) {
            if (a[j] == a[i]) {
                yes = true;
                break;
            }
        }
        if (!(yes)) {
            cout << a[i] << " ";
        }
    }
}
