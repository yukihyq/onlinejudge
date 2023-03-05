// http://noi.openjudge.cn/ch0103/solution/38830979/

#include<iostream>
using namespace std;
int main() {
    float r1,r2,R;
    cin >> r1 >> r2;
    R = 1 / (1 / r1 + 1 / r2);
    printf("%0.2lf\n",R);
}
