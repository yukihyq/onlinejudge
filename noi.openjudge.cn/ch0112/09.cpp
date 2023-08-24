// http://noi.openjudge.cn/ch0112/solution/41035222/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n, m, a[100][100] = {};
string b;

void C() {
    for (int i=0;i<n;i++) {
        for (int j=0;j<m/2;j++) {
            swap(a[i][j], a[i][m-(j+1)]);
        }
    }
}

void D() {
    for (int i=0;i<n/2;i++) {
        for (int j=0;j<m;j++) {
            swap(a[i][j], a[n-(i+1)][j]);
        }
    }
}

void X() {
    for (int i=0;i<max(n, m);i++) {
        for (int j=0;j<i;j++) {
            swap(a[i][j], a[j][i]);
        }
    }
    swap(m, n);
}

void A() {
    X();
    C();
}

void B() {
    X();
    D();
}

int main() {
    cin >> n >> m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    cin >> b;
    for (int i=0;i<b.size();i++) {
        if (b[i] == 'A') {
            A();
        } else if (b[i] == 'B') {
            B();
        } else if (b[i] == 'C') {
            C();
        } else if (b[i] == 'D') {
            D();
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
