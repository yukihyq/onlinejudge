// http://noi.openjudge.cn/ch0103/solution/38832088/

#include<iostream>
using namespace std;
int main() {
    double r,V;
    double pi = 3.14;
    cin >> r;
    V = 4.0 / 3.0 * pi * r * r * r;
    printf("%0.2lf\n",V);
}
