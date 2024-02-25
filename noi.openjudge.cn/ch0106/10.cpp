// http://noi.openjudge.cn/ch0106/solution/43983579/

#include <iostream>
#include <string>
#include <algorithm>
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
	int x = 0;
	
	for (int i=0;i<max(len_a, len_b);i++) {
		c[i] = a[i] + b[i] + x;
		x = c[i] / 10;
		c[i] %= 10;
	}
	c[max(len_a, len_b)] = x;
	bool flag = 0;
	for (int i=max(len_a, len_b);i>=0;i--) {
		if (c[i] != 0 || i == 0) {
			flag = 1;
		}
		if (flag == 1) {
			cout << c[i];
		}
	}
}
