// http://noi.openjudge.cn/ch0110/solution/40801814/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b[500], m = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        if (a % 2 == 1) {
            b[m] = a;
            m++;
        }
    }
    for (int i=m-1;i>0;i--) {
        for (int j=0;j<i;j++) {
            if (b[j] > b[j+1]) {
                swap(b[j], b[j+1]);
            }
        }
    }
    for (int i=0;i<m;i++) {
        cout << b[i];
        if (i < m - 1) {
            cout << ",";
        }
    }
    cout << endl;
}
