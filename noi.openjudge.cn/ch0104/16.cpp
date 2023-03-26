// http://noi.openjudge.cn/ch0104/solution/39178647/ 

#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a + b > c) {
        if (a + c > b) {
            if (b + c > a) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        } else {
            cout << "no" << endl;
        }
    } else {
        cout << "no" << endl;
    }
}
