// http://noi.openjudge.cn/ch0105/solution/40124704/

#include<iostream>
using namespace std;
int main() {
    int n, a, sum = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        if (a % 10 - a % 100 / 10 - a % 1000 / 100 - a / 1000 > 0) {
            sum += 1;
        }
    }
    cout << sum << endl;
}
