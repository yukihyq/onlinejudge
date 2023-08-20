// http://noi.openjudge.cn/ch0112/solution/41006440/

#include<iostream>
#include<string>
using namespace std;

class Patient {
public:
    string name;
    double temperature;
    bool cough;

    void input() {
        cin >> name >> temperature >> cough;
    }

    bool is_ill() {
        return cough && temperature >= 37.5;
    }

};

int main() {
    int n, sum = 0;
    Patient p;
    cin >> n;
    for (int i=0;i<n;i++) {
        p.input();
        if (p.is_ill()) {
            sum++;
            cout << p.name << endl;
        }
    }
    cout << sum << endl;
}
