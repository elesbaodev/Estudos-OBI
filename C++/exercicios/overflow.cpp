#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int p=0,q=0;
    char c;
    cin >> p >> c >> q;
    if(c == '+') {
        p = p + q;
    } else if(c == '*') {
       p = p * q;
    }
    if(p <= n) {
        cout << "OK" << endl;
    } else{
        cout << "OVERFLOW" << endl;
    }
}