// http://noi.openjudge.cn/ch0105/solution/39345725/

#include<iostream>
using namespace std;
int main() {
    int n,a,da = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        if (a > da) {
            da = a;
        }
    }
    cout << da << endl;
}
