// http://noi.openjudge.cn/ch0111/solution/41100847/

#include <cstdio>
using namespace std;

double f(double x) {
    double a;
    a = x * x * x * x * x;
    a -= 15 * x * x * x * x;
    a += 85 * x * x * x;
    a -= 225 * x * x;
    a += 274 * x;
    a -= 121;
    return a;
}

int main() {
    double l = 1.5, r = 2.4, m = l, a;
    while (r - l > 1e-8) {
        a = f(m);
        if (a >= 0) {
            l = m;
        } else {
            r = m;
        }
        m = (l + r) / 2;
    }
    printf("%0.6lf\n", r);
}
