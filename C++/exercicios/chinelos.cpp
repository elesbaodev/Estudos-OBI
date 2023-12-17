#include <iostream>

using namespace std;

int main(void) {
    int n=0,vendas=0,e,estoque=0,estoque2=0;
    int p;
    cin >> n;
    int est[n];
    for(e = 1; e <= n; e++) {
        cin >> est[e];
        estoque = est[e]; 
    }
    cin >> p;
    int ch[p];
        if(estoque > 0) {
             for(e = 1; e <= p; e++) {
            cin >> ch[e];
            estoque2 = ch[e];
            if(estoque >= estoque2) {
                vendas+=1;
            } else {
                vendas = vendas + 0;
            }

        }
        }
        cout << vendas;

    

}