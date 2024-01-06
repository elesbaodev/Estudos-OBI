#include <iostream>

using namespace std;

int main(void) {
    int r,f,c;
    cin >> r >> f >> c;
    if(f > r * 3 || c < 95) {
        cout << "diminuir\n";
    } else if(f < r * 2 && c > 97) {
        cout << "aumentar\n";
    } else {
        cout << "manter\n";
    }
    return 0;
}