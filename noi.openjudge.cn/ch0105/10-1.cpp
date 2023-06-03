// http://noi.openjudge.cn/ch0105/solution/40106934/

#include<iostream>
using namespace std;
int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    for (int i=a;i<b+1;i++) {
        if (i % 17 == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
}
