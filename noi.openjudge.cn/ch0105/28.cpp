// http://noi.openjudge.cn/ch0105/solution/40124897/

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n >= 10 && n != 0) {
        cout << n % 10 << " ";
        n = n / 10;
    }
    cout << n % 10 << endl;
}
