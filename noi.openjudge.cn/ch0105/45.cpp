// http://noi.openjudge.cn/ch0105/solution/40768203/

#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main() {
    int n, sum = 0, a;
    cin >> n;
    for (int i=1;n>0;i++) {
        for (int j=0;j<i&&n>0;j++) {
            sum += i;
            n--;
        }
    }
    cout << sum << endl;
}
