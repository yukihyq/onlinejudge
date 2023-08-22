// http://noi.openjudge.cn/ch0202/solution/41021803/

#include<iostream>
using namespace std;
int main() {
    int n, a[20] = {1, 1}, b;
    cin >> n;
    for (int i=2;i<20;i++) {
        a[i] = a[i-2] + a[i-1];
    }
    for (int i=0;i<n;i++) {
        cin >> b;
        cout << a[b-1] << endl;
    }
}
