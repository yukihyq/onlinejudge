// http://noi.openjudge.cn/ch0104/solution/40737235/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y, a;
    cin >> n >> x >> y;
    if (y % x == 0) {
        a = n - y / x;
    } else if (y % x > 0) {
        a = n - (y / x + 1);
    } 
    if (a < 0) {
        a = 0;
    }
    cout << a << endl;
}
