#include <iostream>

using namespace std;

int main(void) {
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b && c != a && c!= b) {
        cout << c << endl;
    } else if(c == a && b != c && b != a) {
        cout << b << endl;
    } else {
        cout << a << endl;
    }
    return 0;
}