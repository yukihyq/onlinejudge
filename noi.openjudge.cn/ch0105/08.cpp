// http://noi.openjudge.cn/ch0105/solution/39345875/

#include<iostream>
using namespace std;
int main() {
    int n,a,x = 0;
    cin >> n;
    for (int i=0;i<n-1;i++) {
        cin >> a;
        x += a;
    }
    cout << ((n - 2) * 180) - x << endl;
}
