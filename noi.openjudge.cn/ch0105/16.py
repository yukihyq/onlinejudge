// http://noi.openjudge.cn/ch0105/solution/39419626/

#include<iostream>
using namespace std;
int main() {
    int n,a,m = 0;
    double x = 50,y = 200;
    cin >> n >> a;
    bool flag = false;
    for (int i=1;i<=20;i++) {
        x = i * n;
        if (x + 1e-8 > y) {
            cout << i << endl;
            flag = true;
            break;
        }
        y *= 1 + a / 100.0;
    }
    if (flag == false) {
        cout << "Impossible" << endl;
    }
}
