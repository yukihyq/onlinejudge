// http://noi.openjudge.cn/ch0109/solution/40987173/

#include<iostream>
#include<string>
using namespace std;
int n, a[100], da, ans;
string b[100];
int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i] >> b[i];
        if (a[i] > da) {
            da = a[i];
            ans = i;
        }
    }
    cout << b[ans] << endl;
}
