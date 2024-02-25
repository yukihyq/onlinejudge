// http://noi.openjudge.cn/ch0106/solution/43983746/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string _a, _b;
	getline(cin, _a);
	getline(cin, _b);
	const int len_a = _a.size();
	const int len_b = _b.size();
	int a[205] = {}, b[205] = {}, c[205] = {};
	int j = 0;
	for (int i=len_a - 1;i>=0;i--) {
		a[j] = _a[i] - '0';
		j++;
	}
	j = 0;
	for (int i=len_b - 1;i>=0;i--) {
		b[j] = _b[i] - '0';
		j++;
	}
	
	for (int i=0;i<len_a;i++) {
		if (a[i] < b[i]) {
			a[i] += 10;
			a[i+1] -= 1;
		}
		c[i] = a[i] - b[i];
	}
	
	bool flag = 0;
	for (int i=len_a;i>=0;i--) {
		if (c[i] != 0 || i == 0) {
			flag = 1;
		}
		if (flag == 1) {
			cout << c[i];
		}
	}
}
