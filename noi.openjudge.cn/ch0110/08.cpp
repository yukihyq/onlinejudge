// http://noi.openjudge.cn/ch0110/solution/40987428/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Patient {
    int i;
    string id;
    int age;
};

bool cmp(Patient a, Patient b) {
    if (a.age >= 60 && b.age < 60) return true;
    if (a.age < 60 && b.age >= 60) return false;
    if (a.age >= 60 && b.age >= 60) {
        if (a.age > b.age) return true;
        if (a.age < b.age) return false;
        if (a.age == b.age) {
            if (a.i < b.i) return true;
            if (a.i > b.i) return false;
        }
    } else if (a.age < 60 && b.age < 60) {
        if (a.i < b.i) return true;
        if (a.i > b.i) return false;
    }
    return true;
}

int main() {
    Patient a[100];
    int n = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        a[i].i = i;
        cin >> a[i].id >> a[i].age;
    }
    sort(a, a+n, cmp);
    for (int i=0;i<n;i++) {
        cout << a[i].id << endl;
    }
    return 0;
}
