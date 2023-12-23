#include <iostream>
using namespace std;

int main(void) {
    int n,p,h;
    cin >> n;
    int i;
    int pedra,hissua;
    for(i = 0; i < n; i++) {
        cin >> p;
        cin >> h;
        pedra = p / n;
        hissua = h / n;
    }  if(pedra > hissua)  {
        cout << pedra;
    } else if(pedra < hissua) {
        cout << hissua;
    } else {
        cout << pedra << hissua;
    }
    
}