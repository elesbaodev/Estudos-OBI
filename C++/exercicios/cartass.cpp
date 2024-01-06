#include <iostream>

using namespace std;

int main(void) {
    int a,b,c;
    cin >> a >> b >> c;
    if(a == c && a != b) {
        cout << b << endl;
    } else if(a == b && a != c) {
        cout << c << endl;
    } else if(b == c && b != a) {
        cout << a << endl;
    }
    return 0;
}