// http://noi.openjudge.cn/ch0109/solution/40795392/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a;
    bool b[101] = {};
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a;
        if (b[a] == false) {
            b[a] = true;
            cout << a << " ";
        } else {
            continue;
        }
    }
}
