// http://noi.openjudge.cn/ch0201/solution/44049010/

#include <iostream>
using namespace std;
int main() {
	int n, k, a[1000];
	cin >> n >> k;
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	bool flag = 0;  
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (j != i) {
				if (a[j] + a[i] == k) {
					flag = 1;
					break;
				}
			}
		}
		if (flag) {
			break;
		}
	}
	if (flag) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
}
