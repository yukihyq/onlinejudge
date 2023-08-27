// http://noi.openjudge.cn/ch0108/solution/41052651/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string A[10][10], a[10][10], b[10][10];
int n;

void _0() {
    for (int i=0;i<n;i++) {
        for (int j=0;j<i;j++) {
            swap(A[i][j], A[j][i]);
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n/2;j++) {
            swap(A[i][j], A[i][n-(j+1)]);
        }
    }
}

bool cmp() {
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (A[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> a[i][j];
            A[i][j] = a[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> b[i][j];
        }
    }
    if (cmp()) {
        cout << '4' << endl;
        return 0;
    }
    _0();
    if (cmp()) {
        cout << '1' << endl;
        return 0;
    }
    _0();
    if (cmp()) {
        cout << '3' << endl;
        return 0;
    }
    _0();
    if (cmp()) {
        cout << '2' << endl;
        return 0;
    }
    cout << '5' << endl;
}
