#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int a= 0,b= 0,l;
    for(int i = 0; i < n; i++) {
        cin >> l;
        if(l == 1) {
            a = 1 - a;
        }  else if(l == 2) {
            a = 1 - a;
            b = 1 - b;
        }
    } cout << a << endl << b;
    return 0;
}