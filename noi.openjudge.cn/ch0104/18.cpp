// http://noi.openjudge.cn/ch0104/solution/39179017/

#include<iostream>
using namespace std;
int main() {
    int x,y;
    cin >> x >> y;
    if (x >= -1 && x <= 1) {
        if (y >= -1 && y <= 1) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    } else {
        cout << "no" << endl;
    }
}
