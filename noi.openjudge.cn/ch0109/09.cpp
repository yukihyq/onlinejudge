// http://noi.openjudge.cn/ch0109/solution/40993770/

#include<iostream>
using namespace std;
int n, a[10000], b[10000], da;
int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        if (a[i] > da) {
            da = a[i];
        }
        b[a[i]]++;
    }
    for (int i=0;i<=da;i++) {
        cout << b[i] << endl;
    }
}
