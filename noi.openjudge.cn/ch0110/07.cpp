// http://noi.openjudge.cn/ch0110/solution/41021631/

#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

struct Person {
    string a;
    double b;
};

bool cmp(Person a, Person b) {
    if (a.a == "female" && b.a == "male") return false;
    else if (a.a == "male" && b.a == "male") {
        if (a.b > b.b) return false;
    } else if (a.a == "female" && b.a == "female") {
        if (a.b < b.b) return false;
    }
    return true;
}

int main() {
    int n;
    Person a[40];
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i].a >> a[i].b;
    }
    sort(a, a+n, cmp);
    for (int i=0;i<n;i++) {
        printf("%0.2lf " , a[i].b);
    }
}
