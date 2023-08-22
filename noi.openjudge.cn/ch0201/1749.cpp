// http://noi.openjudge.cn/ch0201/solution/41020805/

#include<iostream>
using namespace std;
int main() {
    int n, da = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            for (int k=1;k<=n;k++) {
                if ((i + j) % 2 == 0) {
                    if ((j + k) % 3 == 0) {
                        if ((i + j + k) % 5 == 0) {
                            if (i + j + k > da) {
                                da = i + j + k;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << da << endl;
}
