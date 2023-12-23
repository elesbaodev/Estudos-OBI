#include <iostream>
using namespace std;

int main(void) {
    int p1,c1,p2,c2,pesos1,pesos2;
    cin >> p1 >> c1 >> p2 >> c2;
    pesos1 = p1 * c1;
    pesos2 = p2 * c2;
    if(pesos1 == pesos2) {
        cout << "0" << endl;
    } else if(pesos1 < pesos2){
        cout << "1" << endl;
    } else {
        cout << "-1" << endl;
    }
}