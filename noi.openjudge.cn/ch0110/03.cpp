// http://noi.openjudge.cn/ch0110/solution/40802335/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, b[21];
    string a[21];
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i] >> b[i];
    }
    for (int i=n;i>0;i--) {
        for (int j=0;j<i;j++) {
            if (b[j] < b[j+1]) {
                swap(b[j], b[j+1]);
                swap(a[j], a[j+1]);
            } else if (b[j] == b[j+1] && a[j] > a[j+1]) {
                swap(b[j], b[j+1]);
                swap(a[j], a[j+1]);
            }
        }
    }
    for (int i=0;i<n;i++) {
        cout << a[i] << " " << b[i] << endl;
    }
}
