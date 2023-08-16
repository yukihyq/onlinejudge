// http://noi.openjudge.cn/ch0103/solution/40978571/

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
    float x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    float b = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
    float c = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    float s = (a + b + c) / 2;
    float ans = sqrt(s * (s-a) * (s-b) * (s-c));
    printf("%0.2f\n", ans);
}
