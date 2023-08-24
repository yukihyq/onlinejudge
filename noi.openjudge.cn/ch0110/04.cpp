// http://noi.openjudge.cn/ch0110/solution/41035242/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct scholarship {
    int num, a, b, c, sum;
};

bool cmp(scholarship a, scholarship b) {
    if (a.sum < b.sum) return false;
    if (a.sum > b.sum) return true;
    if (a.a < b.a) return false;
    if (a.a > b.a) return true;
    return a.num < b.num;
}

int main() {
    int n;
    scholarship a[300];
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i].a >> a[i].b >> a[i].c;
        a[i].num = i + 1;
        a[i].sum = a[i].a + a[i].b + a[i].c;
    }
    sort(a, a+n, cmp);
    for (int i=0;i<5;i++) {
        cout << a[i].num << ' ' << a[i].sum << endl;
    }
}
