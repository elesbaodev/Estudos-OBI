#include <iostream>

using namespace std;

int main(void) {
    int a,b,c;
    cin >> a >> b >> c;
    if(a != b && a != c) {
        cout << "A\n";
    } else if(b != a && b != c) {
        cout << "B\n";
    } else if(c != a && c != b) {
        cout << "C\n";
    } else {
        cout << "*\n"; 
    }
    return 0;
}