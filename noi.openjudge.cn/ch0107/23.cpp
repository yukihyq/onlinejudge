// http://noi.openjudge.cn/ch0107/solution/40768435/

#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int n[4], a, b, sum;
int main() {
    cin >> a;
    for (int i=0;i<a;i++) {
        cin >> b;
        if (b >= 1 && b <= 18) {
            n[0] += 1;
        } else if (b >= 19 && b <= 35) {
            n[1] += 1;
        } else if (b >= 36 && b <= 60) {
            n[2] += 1;
        } else {
            n[3] += 1;
        }
        sum += 1;
    }
    for (int i=0;i<4;i++) {
        printf("%0.2f%\n", 100.0 / sum * n[i]);
    }
}
