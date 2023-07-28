// http://noi.openjudge.cn/ch0107/solution/40783558/

#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
string a, b, c, d;
int main() {
    getline(cin, a);
    getline(cin, b);
    for (int i=0;i<a.size();i++) {
        if (a[i] == ' ') {
            continue;
        } else if (a[i] < 'a' && a[i] >= 'A') {
            c += a[i];
        } else if (a[i] >= 'a') {
            c += a[i] - 'a' + 'A';
        }
    }
    for (int i=0;i<b.size();i++) {
        if (b[i] == ' ') {
            continue;
        } else if (b[i] < 'a' && b[i] >= 'A') {
            d += b[i];
        } else if (b[i] >= 'a') {
            d += b[i] - 'a' + 'A';
        }
    }
    if (c == d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
