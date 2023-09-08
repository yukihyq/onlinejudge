// http://noi.openjudge.cn/ch0108/solution/41127977/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, m, a[100][100];
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

    // for (int i=0;i<15;i++) {
    //     for (int j=0;j<15;j++) {
    //         cout << a[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    for(int i=0;i<m;i++) {
        for (int j=0;j<n/2;j++) {
            swap(a[i][j], a[i][n-j-1]);
        }
    }

    // for (int i=0;i<15;i++) {
    //     for (int j=0;j<15;j++) {
    //         cout << a[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    } 
}
