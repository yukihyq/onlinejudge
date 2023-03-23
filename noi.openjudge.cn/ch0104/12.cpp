// http://noi.openjudge.cn/ch0104/solution/39113618/

#include<iostream>
using namespace std;
int main() {
    double a,bike,walk;
    cin >> a;
    bike = a / 3.0 + 50;
    walk = a / 1.2;
    if (bike > walk) {
        cout << "Walk" << endl;
    } else if (bike < walk) {
        cout << "Bike" << endl;
    } else {
        cout << "All" << endl;
    }
}
