// http://noi.openjudge.cn/ch0107/solution/44049308/

#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b, da, xiao;
	int d = 0, x = 100;
	getline(cin, a);
	for (int i=0;i<a.size();i++) {
		if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z') {
			b += a[i];
		} else if (a[i] == ' ') {
			if (b.size() > d) {
				da = b;
				d = b.size();
			} 
			if (b.size() < x) {
				xiao = b;
				x = b.size();
			}
			b = "";
		}
	}
	if (b.size() > d) {
		da = b;
		d = b.size();
	} 
	if (b.size() < x) {
		xiao = b;
		x = b.size();
	}
	cout << da << endl;
	cout << xiao << endl;
}
