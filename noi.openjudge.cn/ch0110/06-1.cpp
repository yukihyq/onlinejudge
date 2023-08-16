// http://noi.openjudge.cn/ch0110/solution/40978815/

#include<iostream>
using namespace std;
int n[10], a[10], b[10], sum1, sum2;
int main() {
    for (int i=0;i<10;i++) {
        cin >> n[i];
        if (n[i] % 2 == 0) {
            a[sum1] = n[i];
            sum1++;
        } else {
            b[sum2] = n[i];
            sum2++;
        }
    }
    for (int i=sum1;i>0;i--) {
        for (int j=0;j<i-1;j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    for (int i=sum2;i>0;i--) {
        for (int j=0;j<i-1;j++) {
            if (b[j] < b[j+1]) {
                swap(b[j], b[j+1]);
            }
        }
    }
    for (int i=0;i<sum2;i++) {
        cout << b[i] << ' ';
    }
    for (int i=0;i<sum1;i++) {
        cout << a[i] << ' ';
    }
}
