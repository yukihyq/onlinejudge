// http://noi.openjudge.cn/ch0104/solution/40077221/

#include<iostream>
using namespace std;
int main() {
    int a, b;
    char c;
    cin >> a >> b >> c;
    if (c == '+') {
        cout << a + b << endl;
    } else if (c == '-') {
        cout << a - b << endl;
    } else if (c == '*') {
        cout << a * b << endl;
    } else if (c == '/') {
        if (b == 0) {
            cout << "Divided by zero!" << endl;
        } else {
            cout << a / b << endl;
        }
    } else {
        cout << "Invalid operator!" << endl;
    }
        
}
