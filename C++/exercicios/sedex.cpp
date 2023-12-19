#include <bits/stdc++.h>
using namespace std;

int main(void) {
    double d;
    cin >> d;
    d = d / 2;
    d = d * d * 4;
    int a,l,p;
    cin >> a >> l >> p;
    if(a * l < d) {
        cout << "N" << endl;
    } else {
        cout << "S" << endl;
    }

} 