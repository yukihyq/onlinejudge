// http://noi.openjudge.cn/ch0103/solution/38832887/

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double h,r,v;
    cin >> h >> r;
    v = 3.14159 * r * r * h;
    printf("%0.0lf\n",ceil(20000/v));
}
