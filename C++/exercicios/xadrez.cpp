#include <iostream>

using namespace std;

int main(void) {
    int l,c;
    cin >> l >> c;
    if((l + c) % 2 == 0) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
    return 0;
    
}