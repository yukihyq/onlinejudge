// http://noi.openjudge.cn/ch0110/solution/40978897/

#include<iostream>
using namespace std;
int n[10], sum1, sum2;
int main() {
    for (int i=0;i<10;i++) {
        cin >> n[i];
    }
    for (int i=10;i>0;i--) {
        for (int j=0;j<i-1;j++) {
            if (n[j] % 2 == 0 && n[j+1] % 2 == 1) {
                swap(n[j], n[j+1]);
            } else if (n[j] % 2 == 1 && n[j+1] % 2 == 1) {
                if (n[j] < n[j+1]) {
                    swap(n[j], n[j+1]);
                }
            } else if (n[j] % 2 == 0 && n[j+1] % 2 == 0) {
                if (n[j] > n[j+1]) {
                    swap(n[j], n[j+1]);
                }
            }
        }
    }
    for (int i=0;i<10;i++) {
        cout << n[i] << ' ';
    }
}
