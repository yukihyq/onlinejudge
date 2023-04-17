// http://noi.openjudge.cn/ch0105/solution/39506591/

#include<iostream>
using namespace std;
int main() {
    int m,n,a,sum = 0;
    cin >> m >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        if (a <= m) {
            m -= a;
            sum++;
        }
    }
    cout << n - sum << endl;
}
