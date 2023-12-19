#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,s=0,d;
    cin >> n;
    int r[n];
    for(int i = 0; i < n; i++) {
        cin >> r[i];
        s = r[i] / 2;
        d = s;
        cout << fixed << setprecision(4) << d << endl;

    }
}