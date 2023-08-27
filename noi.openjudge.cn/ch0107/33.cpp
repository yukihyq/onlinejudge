// http://noi.openjudge.cn/ch0107/solution/41051771/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int i, j;
    getline(cin, a);
    for (i=0,j=a.size()-1;i<j;i++,j--) {
        if (a[i] != a[j]) break;
    }
    if (i >= j) cout << "yes" << endl;
    else cout << "no" << endl;
}
