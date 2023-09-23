// http://noi.openjudge.cn/ch0107/solution/41324363/

#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b = "";
    getline(cin, a);
    for (int i=0;i<a.size()-1;i++) {
        b += int(a[i]) + int(a[i+1]);
    }
    b += int(a[0]) + int(a[a.size()-1]);
    cout << b << endl;
}
