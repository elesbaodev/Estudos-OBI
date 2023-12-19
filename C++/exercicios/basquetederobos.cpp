#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int d;
    cin >> d;
    if(d <= 800) {
        cout << "1";
    } else if(d > 800 && d <= 1400) {
        cout << "2";
    } else if( d > 1400 && d <= 2000) {
        cout << "3";
    }
}