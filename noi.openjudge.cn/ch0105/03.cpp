// http://noi.openjudge.cn/ch0105/solution/39335812/

#include<iostream>
using namespace std;
int main() {
    int n;
    double a,sum = 0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        sum += a;
    }
    printf("%0.4f\n",sum/n);
}
