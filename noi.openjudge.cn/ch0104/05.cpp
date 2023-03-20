// http://noi.openjudge.cn/ch0104/solution/39090645/

#include<iostream>
using namespace std;
int main() {
    long long x,y;
    cin >> x >> y;
    if (x > y) {
        cout << ">" << endl;
    } else if (x == y) {
        cout << "=" << endl;
    } else {
        cout << "<" << endl;
    }
}
