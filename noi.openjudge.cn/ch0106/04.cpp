// http://noi.openjudge.cn/ch0106/solution/40670707/

#include<iostream>
using namespace std;
int main() {
    int n, a[101];
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=n-1;i>=0;i--) {
        cout << a[i] << " ";
    }
}
