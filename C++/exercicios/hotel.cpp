#include <iostream>

using namespace std;
//  n = (d + (n - 1)) * 5; //
int main(void) {
    int d,a,n,mes=30;
    cin >> d >> a >> n;
    if(n == 1) {
        d = d * 31;
        cout << d << endl;
    } else {
        for(int i = 30; i > n; i = i - n) {
            cout << i << endl;

        }
    }
}