#include <iostream>
using namespace std;

int main(void) {
    int a,b,c,h,l,caixa,janela;
    cin >> a >> b >> c >> h >> l;
    caixa = a * c;
    janela = h * l;
    if(janela >= caixa) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }


}