// http://noi.openjudge.cn/ch0105/solution/40636432/

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=2;i<n;i++) {
        if (n % i == 0) {
            cout << n / i << endl;
            break;
        }
    }
}
