// http://noi.openjudge.cn/ch0103/solution/40076619/

#include<iostream>
using namespace std;
int main() {
    int a1, a2, n;
    cin >> a1 >> a2 >> n;
    int ans = a1 + (a2 - a1) * (n - 1);
    cout << ans << endl;
}
