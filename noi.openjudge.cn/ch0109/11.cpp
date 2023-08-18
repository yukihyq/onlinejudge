// http://noi.openjudge.cn/ch0109/solution/40994671/

#include<iostream>
#include<string>
using namespace std;
int sum, n;
string a;
char da = '0';
int main() {
    cin >> n;
    cin >> a;
    for (int i=0;i<a.size();i++) {
        if (a[i+1] == a[i]) {
            sum++;
        } else {
            sum++;
            if (sum >= n) {
                da = a[i];
                break;
            }
            sum = 0;
        }
    }
    if (da == '0') {
        cout << "No" << endl;
    } else {
        cout << da << endl;
    }
}
