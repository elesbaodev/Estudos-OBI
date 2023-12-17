#include <iostream>

using namespace std;

int main(void) {
    int tam;
    cin >> tam;
    int a[tam];
    int b[tam];
    int *left;
    left = 0;
    int *right;
    right = 0;
    int moedas = 0;
    for(int i = 0; i < tam; i++) {
        if(a[i] == b[i]) {
            cout << moedas;
        }
    }

    return 0;
}