// http://noi.openjudge.cn/ch0111/solution/41100318/

#include <iostream>
using namespace std;
int main() {
    int n, m, a[100000], b;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i=0;i<m;i++) {
        cin >> b;
        int mid = 0, l = 0, r = n;
        while (l + 1 < r) {
            mid = (l + r) / 2;
            if (b >= a[mid]) {
                l = mid;
            } else {
                r = mid;
            }
        }
        if (r == n) {
            cout << a[l] << endl;
        } else if (a[r] - b >= b - a[l]) {
            cout << a[l] << endl;
        } else if (a[r] - b < b - a[l]) {
            cout << a[r] << endl;
        }
    }
}
