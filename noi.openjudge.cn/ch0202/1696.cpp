// http://noi.openjudge.cn/ch0202/solution/41009075/

#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

double stove() {
    string n;
    cin >> n;
    if (n[0] == '+') {
        double a = stove();
        double b = stove();
        return a + b;
    } else if (n[0] == '-') {
        double a = stove();
        double b = stove();
        return a - b;
    } else if (n[0] == '*') {
        double a = stove();
        double b = stove();
        return a * b;
    } else if (n[0] == '/') {
        double a = stove();
        double b = stove();
        return a / b;
    } else {
        return stof(n);
    }
}

int main() {
    printf("%lf\n", stove());
}
