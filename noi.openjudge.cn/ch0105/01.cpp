// http://noi.openjudge.cn/ch0105/solution/39324248/

#include<iostream>
using namespace std;
int main() {
    int n,a;
    double b,sum = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        b = a;
        sum += b;
    }
    printf("%0.2f\n",sum/n);
}
