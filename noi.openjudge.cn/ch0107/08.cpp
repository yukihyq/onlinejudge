// http://noi.openjudge.cn/ch0107/solution/40768258/

#include<bits/stdc++.h>
using namespace std;
string n;
char a, b;
int main() {
    cin >> n >> a >> b;
    for (int i=0;i<n.size();i++) {
        if (n[i] == a) {
            n[i] = b;
        }
        cout << n[i];
    }
}
