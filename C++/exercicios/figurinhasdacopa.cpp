#include <iostream>

using namespace std;

int main(void) {
    int n,c,m;
    cin >> n >> c >> m;
    int carimbadas[c];
    int fi[m];
    int i,e;
    int cartas=0;
    for(i = 0; i < c; i++) {
        cin >> carimbadas[i];
    }
    for(e = 0; e < m; e++) {
        cin >> fi[e];
    }
    if(carimbadas[i] != fi[e] || carimbadas[i+1] != fi[e+1]) {
        cartas += 1;

    } if(carimbadas[i] == fi[e] && carimbadas[i+1] == fi[e+1]){
        cartas += 0;
    }
    cout << cartas;
}