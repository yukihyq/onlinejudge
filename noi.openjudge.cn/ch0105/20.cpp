// http://noi.openjudge.cn/ch0105/solution/39440713/

#include<iostream>
using namespace std;
int main() {
    double n,sum = 0;
    cin >> n;
    sum = sum - n;
    for (int i=0;i<10;i++) {
        sum += n * 2;
        n /= 2;
    }
    cout << sum << endl;
    cout << n << endl;
}
