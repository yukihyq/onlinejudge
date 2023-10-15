// http://noi.openjudge.cn/ch0105/solution/41690247/

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int a, b;
    double sum;
    cin >> a >> b;
    sum = a;
    for (int i=0;i<b;i++) {
        sum += sum * 0.001;
    }
    printf("%0.4lf\n", sum);
}
