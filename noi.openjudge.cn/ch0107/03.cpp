// http://noi.openjudge.cn/ch0107/solution/41323993/

#include <iostream>
#include <string>
using namespace std;
int main() {
    double a, b, sum;
    string c, d;
    cin >> a >> c >> d;
    b = 1.0 / c.size();
    for (int i=0;i<c.size();i++) {
        if (c[i] == d[i]) {
            sum++;
        }
    }
    b *= sum;
    if (b >= a) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
