#include <iostream>

using namespace std;

int main(void) {
    int a,b,c;
    cin >> a >> b >> c;
    if((b - a) < (c - b)) {
        cout << "1\n";
    } else if((b - a) > (c - b)) {
        cout << "-1\n";
    } else {
        cout << "0\n";
    }
    return 0;
}