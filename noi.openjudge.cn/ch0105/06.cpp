// http://noi.openjudge.cn/ch0105/solution/39345748

#include<iostream>
using namespace std;
int main() {
    int n,a,da = 0,xiao = 1000;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        if (a > da) {
            da = a;
        } 
        if (a < xiao) {
            xiao = a;
        }
    }
    cout << da - xiao << endl;
}
