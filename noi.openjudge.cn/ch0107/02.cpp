// http://noi.openjudge.cn/ch0107/solution/40738775/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[26];
    string n;
    for (int i=0;i<26;i++) {
        a[i] = -1;
    }
    cin >> n;
    for (int i=0;i<n.size();i++) {
        if (a[n[i]-'a'] == -1) {
            a[n[i]-'a'] = i;
        } else {
            a[n[i]-'a'] = -2;
        }
    }
    int ans = -1;
    for(int i=0;i<26;i++) {
        if (a[i] < 0) {
            continue;
        }
        if (ans == -1 || a[i] < a[ans]) {
            ans = i;
        }
    }
    if (ans == -1) {
        cout << "no" << endl;
    } else {
        cout << (char)(ans+'a') << endl;
    }
    return 0;
}
