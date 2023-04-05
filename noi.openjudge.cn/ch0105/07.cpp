// http://noi.openjudge.cn/ch0105/solution/39345809/

#include<iostream>
using namespace std;
int main() {
    int n,a,b,c,A = 0,B = 0,C = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a >> b >> c;
        A += a;
        B += b;
        C += c;
    }
    cout << A << " " << B << " " << C << " "  << A + B + C << endl;
}
