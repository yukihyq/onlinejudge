// http://noi.openjudge.cn/ch0113/solution/41027655/

#include<iostream>
#include<string>
using namespace std;

long long a_to_ten (long long a, string b) {
    long long sum = 0, num = a;
    a = 1;
    for (int i=b.size()-1;i>=0;i--) {
        if (b[i] >= '0' && b[i] <= '9') {
            sum += a * (b[i] - '0');
        } else {
            sum += a * (b[i] - 'A' + 10);
        }
        a *= num;
        // cout << a << ' ' << sum << endl;
    }
    return sum;
}

string ten_to_b (long long a, long long b) {
    // cout << 111 << endl;
    string x = "", y = "";
    while (b >= a) {
    // cout << 222 << endl;
        int c = b % a;
        if (b % a >= 10) {
            x += char((c - 10) + 'A');
        } else {
            x += char(c + '0');
        }
        b /= a;
        // cout << x << endl;
    }
    if (b % a >= 10) {
        x += char((b - 10) + 'A');
    } else {
        x += char(b + '0');
    }
    // cout << 333 << endl;
    for (int i=x.size()-1;i>=0;i--) {
    // cout << 444 << endl;
        y += x[i];
    }
    // cout << 555 << endl;
    return y;
}

int main() {
    long long a, b, ten = 0;
    string n;
    cin >> a >> n >> b;
    for (int i=0;i<n.size();i++) {
        if (n[i] >= 'a' && n[i] <= 'z') {
            n[i] = n[i] - 'a' + 'A';
        }
    }
    ten = a_to_ten(a, n);
    // cout << ten << endl;
    n = ten_to_b(b, ten);
    cout << n << endl;
}
