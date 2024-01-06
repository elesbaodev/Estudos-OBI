#include <iostream>

using namespace std;

int main(void) {
    int doces,x,y,z;
    cin >> doces >> x >> y >> z;
    if(doces >= (x + y + z)) {
        cout << "3\n";
    } else if(doces >= (x + y) or (doces >= (y + z)) or (doces >= (x + z))) {
        cout << "2\n";
    } else {
        cout << "1\n";
    }
    return 0;
}