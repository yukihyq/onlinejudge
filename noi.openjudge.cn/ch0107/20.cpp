// http://noi.openjudge.cn/ch0107/solution/40961340/

#include<iostream>
#include<string>
using namespace std;
string a;
int main() {
    getline(cin, a);
    if (a[a.size()-3] == 'i' && a[a.size()-2] == 'n' && a[a.size()-1] == 'g') {
        for (int i=0;i<a.size()-3;i++) {
            cout << a[i];
        }
        cout << endl;
    } else if (a[a.size()-2] == 'l' && a[a.size()-1] == 'y') {
        for (int i=0;i<a.size()-2;i++) {
            cout << a[i];
        }
        cout << endl;
    } else if (a[a.size()-2] == 'e' && a[a.size()-1] == 'r') {
        for (int i=0;i<a.size()-2;i++) {
            cout << a[i];
        }
        cout << endl;
    } else {
        cout << a << endl;
    }
}
