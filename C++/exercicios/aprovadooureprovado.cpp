#include <iostream>
using namespace std;

int main(void) {
    double n1,n2;
    cin >> n1 >> n2;
    double media = (n1 + n2) / 2;
    if(media >= 7) {
        cout << "Aprovado\n";
    } else if(media < 7 && media >= 4) {
        cout << "Recuperacao\n";
    } else {
        cout << "Reprovado\n";
    }
    return 0;
}