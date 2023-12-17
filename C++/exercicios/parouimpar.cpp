#include <iostream>

using namespace std;

int main(void) {
    int p,dedo1,dedo2,dedos;
    cin >> p >> dedo1 >> dedo2;
    dedos = (p + dedo1 + dedo2) % 2;
    if(dedos == 0) {
        cout << "0" << endl;
    } else {
        cout << "1" << endl;
    }
}