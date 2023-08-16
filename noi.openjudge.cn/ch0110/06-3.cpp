// http://noi.openjudge.cn/ch0110/solution/40978948/

#include<iostream>
#include<algorithm>
using namespace std;
int n[10], sum1, sum2;

bool cmp(int a, int b) {
    if (a % 2 == 0 && b % 2 == 1) {
        return false;
    } else if (a % 2 == 1 && b % 2 == 1) {
        if (a < b) {
            return false;
        }
    } else if (a % 2 == 0 && b % 2 == 0) {
        if (a > b) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i=0;i<10;i++) {
        cin >> n[i];
    }
    sort(n, n+10, cmp);
    for (int i=0;i<10;i++) {
        cout << n[i] << ' ';
    }
}
