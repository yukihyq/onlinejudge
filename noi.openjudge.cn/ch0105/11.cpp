// http://noi.openjudge.cn/ch0105/solution/39357098/

#include<iostream>
using namespace std;
int main() {
    int n,a,A = 0,B = 0,C = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        if (a == 1) {
            A += 1;
        }
        if (a == 5) {
            B += 1;
        }
        if (a == 10) {
            C += 1;
        }
    }
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
}
