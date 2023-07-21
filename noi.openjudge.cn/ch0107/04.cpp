// http://noi.openjudge.cn/ch0107/solution/40686097/

#include<bits/stdc++.h>
using namespace std;
char a[100001];
int num, sum;
int main(){
    cin >> a;
    int t = strlen(a);
    for (int i=1;i<=t;i++) {
        for (int j=i;j<=t;j++) {
            if (a[i] == a[j] && i != j) {
                sum += 1;
            }
        }
        if (sum == 0) {
            cout << a[i] << endl;
            num += 1;
        }
    }
    if (num == 0) {
        cout << "no" << endl;
    }
    return 0;
}
