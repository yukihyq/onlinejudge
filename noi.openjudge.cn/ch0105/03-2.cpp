// http://noi.openjudge.cn/ch0105/solution/40107087/

#include<iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int k1 = n / 17;
    int a = 17 * k1 * (1 + k1) / 2;
    int k2 = (m - 1) / 17;
    int b = 17 * k2 * (1 + k2) / 2;
    cout << a - b << endl;
}
