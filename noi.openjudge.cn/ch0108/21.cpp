// http://noi.openjudge.cn/ch0108/solution/40791603/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int row, col;
    cin >> row >> col;
    int a[row][col];
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0, j=0;j<col;j++) {
        int x = i, y = j;
        while (x < row && y >= 0) {
            cout << a[x][y] << endl;
            x++;
            y--;
        }
    }
    for (int i=1, j=col-1;i<row;i++) {
        int x = i, y = j;
        while (x < row && y >= 0) {
            cout << a[x][y] << endl;
            x++;
            y--;
        }
    }
}
