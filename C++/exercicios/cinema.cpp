#include <iostream>

using namespace std;

int main(void) {
    int precos=0;
    int a,b,preco1 = 15,preco2 = 30, preco3 = 20;
    cin >> a >> b;
    if(a <= 17 && b <= 17) {
        precos = preco1 * 2;

    } else if(a >= 18 && b >= 18 && a < 60 && b < 60) {
        precos = preco2 * 2;
    } else if( a >= 60  && b >= 60 ) {
        precos = preco3 * 2;
    } if((a <= 17 && b >= 18 && b < 60 ) || (a >= 18 && b <= 17 && a < 60)) {
        precos = preco1 + preco2;
    } else if((a <= 17 && b >= 60) || (a >= 60 && b <= 17)) {
        precos = preco1 + preco3;
    } else if((a >= 18 && b >= 60 && a < 60) || (a >= 60 && b >= 18 && b < 60)) {
        precos = preco2 + preco3;
    } cout << precos << endl;
    return 0;
    }
