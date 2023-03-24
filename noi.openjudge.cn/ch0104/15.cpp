// http://noi.openjudge.cn/ch0104/solution/39148642/

#include<iostream>
using namespace std;
int main() {
    int a,max;
    cin >> a;
    max = a;
    for (int i=0;i<2;i++) {
        cin >> a;
        if (a > max) {
            max = a;
        }
    }
    cout << max << endl;
}
