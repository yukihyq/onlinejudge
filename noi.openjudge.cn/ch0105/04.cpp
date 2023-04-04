// http://noi.openjudge.cn/ch0105/solution/39335955/

#include<iostream>
using namespace std;
int main() {
    int n,a;
    double sum = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        sum += a;
    }
    printf("%d %0.5f",int(sum),sum/n);
}
