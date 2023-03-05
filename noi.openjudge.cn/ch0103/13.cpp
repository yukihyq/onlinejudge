// http://noi.openjudge.cn/ch0103/solution/38832290/

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << n % 10 << n % 100 / 10 << n / 100 << endl;
}
