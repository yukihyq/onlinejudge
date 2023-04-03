// http://noi.openjudge.cn/ch0105/solution/39324348/

#include<iostream>
using namespace std;
int main() {
    double a,sum = 0;
    for (int i=0;i<12;i++) {
        cin >> a;
        sum += a;
    }
    printf("$%0.2f\n",sum/12);
}
