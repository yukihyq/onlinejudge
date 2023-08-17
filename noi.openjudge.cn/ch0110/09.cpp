// http://noi.openjudge.cn/ch0110/solution/40987457/

#include<iostream>
#include<algorithm>
using namespace std;
int n, a[100], b[100], sum;
int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    for (int i=0;i<n;i++) {
        for (int j=0;j<i-1;j++) {
            if (a[j] == a[j+1]) {
                a[j] = 0;
            }
        }
    }
    for (int i=0;i<n;i++) {
        if (a[i] != 0) {
            sum++;
        }
    }
    cout << sum << endl;
    for (int i=0;i<n;i++) {
        if (a[i] != 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
