// http://noi.openjudge.cn/ch0112/solution/41021932/

#include<iostream>
#include<string>
using namespace std;
int main() {
    int sum = 0, ans;

    string a;
    getline(cin, a);
    string b;
    getline(cin, b);

    for (int i=0;i<a.size();i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] - 'a' + 'A';
        }
    }

    b += ' ';
    string c = "";
    for (int i=0;i<b.size();i++) {
        if (b[i] >= 'a' && b[i] <= 'z') {
            c += b[i] - 'a' + 'A';
        } else if (b[i] >= 'A' && b[i] <= 'Z'){
            c += b[i];
        }
        if (b[i] == ' ') {
            if (c == a) {
                if (sum == 0) {
                    ans = i - a.size();
                }
                sum++;
            }
            c = "";
        }
    }
    if (sum == 0) {
        cout << -1 << endl;
    } else {
        cout << sum << ' ' << ans << endl;
    }
}
