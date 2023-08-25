// http://noi.openjudge.cn/ch0108/solution/41041178/

#include<iostream>
using namespace std;
int main() {
    long long n, m, a[100][100];
    cin >> n >> m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0;i<max(n, m);i++) {
        for (int j=0;j<i;j++) {
            swap(a[i][j], a[j][i]);
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
