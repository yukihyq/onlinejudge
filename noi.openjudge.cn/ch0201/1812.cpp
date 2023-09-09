// http://noi.openjudge.cn/ch0201/solution/41130722/

#include <iostream>
using namespace std;
int main() {
    int n, sum;
    cin >> n;
    for (int a=2;a<=n;a++) {
        sum = a * a * a;
        for (int b=2;b<=a;b++) {
            for (int c=b;c<=a;c++) {
                for (int d=c;d<=a;d++) {
                    if (b * b * b + c * c * c + d * d * d == sum) {
                        cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")" << endl;
                    }
                }
            }
        }
    }
}

// Cube = 6, Triple = (3,4,5)
// Cube = 12, Triple = (6,8,10)
// Cube = 18, Triple = (9,12,15)
// Cube = 18, Triple = (2,12,16)
// Cube = 19, Triple = (3,10,18)
// Cube = 20, Triple = (7,14,17)
// Cube = 24, Triple = (12,16,20)

// Cube = 6, Triple = (3,4,5)
// Cube = 12, Triple = (6,8,10)
// Cube = 18, Triple = (2,12,16)
// Cube = 18, Triple = (9,12,15)
// Cube = 19, Triple = (3,10,18)
// Cube = 20, Triple = (7,14,17)
// Cube = 24, Triple = (12,16,20)

