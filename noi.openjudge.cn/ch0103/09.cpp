// http://noi.openjudge.cn/ch0103/solution/38830658/

#include<iostream>
using namespace std;
int main() {
    double r,d,s,c;
    double Pi = 3.14159;
    cin >> r;
    d = r * 2;
    s = Pi * r * r;
    c = Pi * d;
    printf("%0.4lf %0.4lf %0.4lf\n",d,c,s);
}
