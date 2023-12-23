#include <iostream>
using namespace std;

int main(void) {
    int c1,l1,c2,l2;
    cin >> c1 >> l1 >> c2 >> l2;
    int dimensoes;
    if(c1 * l1 > c2 * l2) {
        dimensoes = c1 * l1;
    } else {
        dimensoes = c2 * l2;
    }
    cout << dimensoes << endl;
    return 0;
}