// http://noi.openjudge.cn/ch0108/solution/41041004/

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int n, m, a[100][100], b[100][100], sum = 0;
    double c;
    cin >> n >> m;
    c = 100 / (double(n * m));
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> b[i][j];
            if (a[i][j] == b[i][j]) {
                sum++;
            }
        }
    }
    c *= sum;
    printf("%0.2lf\n", c);
}
