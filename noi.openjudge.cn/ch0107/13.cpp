// http://noi.openjudge.cn/ch0107/solution/40826723/

#include<bits/stdc++.h>
using namespace std;
string a;
int main() {
    getline(cin, a);
    for (int i=0;i<a.size();i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= 'a' - 'A';
        }
    }
    cout << a << endl;
}
