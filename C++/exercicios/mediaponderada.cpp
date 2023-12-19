#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a,b,peso1 = 4, peso2 = 6;
    cin >> a >> b;
    a = a * peso1;
    b = b * peso2;
    int pesos = peso1 + peso2;
    int media;
    media = (a + b) / pesos;
    cout << media << endl;

}