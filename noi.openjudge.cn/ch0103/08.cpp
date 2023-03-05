// http://noi.openjudge.cn/ch0103/solution/38829583/

#include<iostream>
using namespace std;
int main() {
    double C,F;
    cin >> F;
    C = 5 * (F-32) / 9 ;
    printf("%0.5lf\n",C);
}
