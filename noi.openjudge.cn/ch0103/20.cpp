// http://noi.openjudge.cn/ch0103/solution/39077141/

#include<iostream>
using namespace std;
int main() {
    long long n,a = 2;
    cin >> n;
    if (n == 0) {
        a = 1;
    } else {
        for (int i=0;i<n-1;i++) {
            a *= 2;
        } 
    }
    cout << a << endl;
}
