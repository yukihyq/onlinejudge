// http://noi.openjudge.cn/ch0104/solution/39077843/

#include<iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if (n < 0) {
        cout << "negative" << endl;
    } else if (n == 0) {
        cout << "zero" << endl;
    } else {
        cout << "positive" << endl;
    }
}
