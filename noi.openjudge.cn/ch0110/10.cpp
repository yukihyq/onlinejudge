// http://noi.openjudge.cn/ch0110/solution/40802802/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int b = 0;
    string a[101];
    while (cin >> a[b]) {
        b++;
    }
    for (int i=b-1;i>0;i--) {
        for (int j=0;j<i;j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    for (int j=0;j<b;j++) {
        if (a[j+1] != a[j]) {
            cout << a[j] << endl;
        }
    }
}
