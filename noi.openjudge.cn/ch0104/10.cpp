// http://noi.openjudge.cn/ch0104/solution/39113308/

#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    if (a < 60 && b >= 60) {
        cout << "1" << endl;
    } else if (a >= 60 && b < 60) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
}
