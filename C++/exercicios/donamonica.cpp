#include <iostream>

using namespace std;

int main(void) {
    int m,f1,f2,idades=0;
    cin >> m >> f1 >> f2;
    idades = m - (f1 + f2);
    if(f1 > f2 && f1 > idades) {
        cout << f1 << endl;
    } else if(f2 > f1 && f2 > idades) {
        cout << f2 << endl;
    } else {
        cout << idades << endl;
    }
    return 0;
}