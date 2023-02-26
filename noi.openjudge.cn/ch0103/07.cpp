// http://noi.openjudge.cn/ch0103/solution/38720779/

#include<iostream>
using namespace std;
int main() {
    double a,b,c,d,x;
    cin >> x >> a >> b >> c >> d;
    printf("%0.7lf\n",(a*x*x*x)+(b*x*x)+(c*x)+d);
}
