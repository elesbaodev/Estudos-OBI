#include <iostream>
using namespace std;

int main(void) {
    int p,r;
    cin >> p >> r;
    if(p == 1 && r == 0) {
        cout << "B" << endl;
    } else if((p == 0 && r == 1) || (p == 0 && r == 0) ) {
        cout << "C" << endl;
    } else if(p == 1 && r == 1) {
        cout << "A" << endl;
    }
    return 0;
}