// http://noi.openjudge.cn/ch0107/solution/40961367/

#include<iostream>
#include<string>
using namespace std;
string a;
int sum;
int main() {
    getline(cin, a);
    for (int i=0;i<a.size();i++) {
        if (a[i] != ' ') {
            sum++;
        }
        if (sum == 0 && a[i] == ' ') {
            continue;
        }
        if (a[i] == ' ') {
            cout << sum << ',';
            sum = 0;
        }
    }
    cout << sum;
}
