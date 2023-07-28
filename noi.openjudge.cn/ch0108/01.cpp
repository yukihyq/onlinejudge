// http://noi.openjudge.cn/ch0108/solution/40783628/

#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int a[6][6], x, y;
int main() {
    for (int i=1;i<=5;i++) {
        for (int j=0;j<5;j++) {
            cin >> a[i][j];
        }
    }
    cin >> x >> y;
    for (int i=1;i<=5;i++) {
        for (int j=0;j<5;j++) {
            if (i == x) {
                cout << a[y][j] << " ";
            } else if (i == y) {
                cout << a[x][j] << " ";
            } else {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}
