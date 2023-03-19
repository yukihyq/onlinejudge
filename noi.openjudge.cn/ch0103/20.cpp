// http://noi.openjudge.cn/ch0103/solution/39077526/

#include<iostream>
using namespace std;
int main() {
    long long n,a = 1;
    cin >> n;
    for (int i=0;i<n;i++) {
        a *= 2;
    } 
    cout << a << endl;
}
