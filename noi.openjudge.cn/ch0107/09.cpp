// http://noi.openjudge.cn/ch0107/solution/40826742/

#include<bits/stdc++.h>
using namespace std;
string a, b;
int main() {
    getline(cin, a);
    for (int i=0;i<a.size();i++) {
        if (a[i] >= 'A' && a[i] <= 'Y' || a[i] >= 'a' && a[i] <= 'y') {
            b += a[i] + 1;
        } else if (a[i] == 'Z') {
            b += 'A';
        } else if (a[i] == 'z') {
            b += 'a';
        } else {
            b += a[i];
        }
    }
    cout << b << endl;
}
