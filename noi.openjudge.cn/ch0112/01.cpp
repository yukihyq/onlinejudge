// http://noi.openjudge.cn/ch0112/solution/41021796/

#include<iostream>
#include<string>
using namespace std;
int main() {
    string a;
    int sum;
    getline(cin, a);
    int n = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != ' ') {
            a[n++] = a[i];
        }
    }
    a = a.substr(0, n);
    if (a[2] == '+') {
        sum = int(((a[0] - '0') * 10 + (a[1] - '0')) + ((a[3] - '0') * 10 + (a[4] - '0')));
    } else if (a[2] == '-') {
        sum = int(((a[0] - '0') * 10 + (a[1] - '0')) - ((a[3] - '0') * 10 + (a[4] - '0')));
    } else if (a[2] == '*') {
        sum = int(((a[0] - '0') * 10 + (a[1] - '0')) * ((a[3] - '0') * 10 + (a[4] - '0')));
    } else if (a[2] == '/') {
        sum = int(((a[0] - '0') * 10 + (a[1] - '0')) / ((a[3] - '0') * 10 + (a[4] - '0')));
    } else if (a[2] == '%') {
        sum = int(((a[0] - '0') * 10 + (a[1] - '0')) % ((a[3] - '0') * 10 + (a[4] - '0')));
    }
    cout << sum << endl;
}
