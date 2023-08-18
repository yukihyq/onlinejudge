// http://noi.openjudge.cn/ch0109/solution/40994715/

#include<iostream>
using namespace std;
int a[1000], da, sum, n;
int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i<n;i++) {
        if (a[i+1] == a[i]) {
            sum++;
        } else {
            sum++;
            if (sum > da) {
                da = sum;
            }
            sum = 0;
        }
    }
    cout << da << endl;
}
