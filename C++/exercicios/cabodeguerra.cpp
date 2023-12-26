#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int x[6];
    int i;
    for(i = 0; i < 6; i++) {
        cin >> x[i];
    } 
    if((x[i+0] % x[1+1] == 0) && (x[i+2] % x[i+3] == 0) && (x[i+4] % x[i+5] == 0)) {
        cout << "N\n";
    } else {
        cout << "S\n";
    }
    return 0;

}