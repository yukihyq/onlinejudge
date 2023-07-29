// http://noi.openjudge.cn/ch0108/solution/40790842/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    for (int i=1;i<=n;i++) {
        cout << "(" << a << "," << i << ")" << " ";
    }
    cout << endl;
    for (int i=1;i<=n;i++) {
        cout << "(" << i << "," << b << ")" << " ";
    }
    cout << endl;
    int i = a, j = b;
    while (i > 1 && j > 1) {
        i--;
        j--;
    }
    while (i <= n && j <= n) {
        cout << "(" << i << "," << j << ")" << " ";
        i++;
        j++;
    }
    cout << endl;
    i = a;
    j = b;
    while (i < n && j > 1) {
        i++;
        j--;
    }
    while (i >= 1 && j <= n) {
        cout << "(" << i << "," << j << ")" << " ";
        i--;
        j++;
    }
}
