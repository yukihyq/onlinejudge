// http://noi.openjudge.cn/ch0202/solution/41014814/

#include<iostream>
using namespace std;

int stove(int a, int b) {
    if (b == 0) {
        return a;
    }
    return stove(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    int ans = stove(a, b);
    cout << ans << endl;
}
