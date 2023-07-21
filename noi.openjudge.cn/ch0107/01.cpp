// http://noi.openjudge.cn/ch0107/solution/40685670/

#include<iostream>
using namespace std;
string a;
int sum;
int main() {
    getline(cin, a);
    for (int i=0;i<=a.size();i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            sum += 1;
        }
    }
    cout << sum << endl;
}
