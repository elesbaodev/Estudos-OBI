#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int qt1;
    cin >> qt1;
    int i,c;
    int p1[qt1];
    int m;
    int saida=0;
    for(i = 0; i < qt1; i++) {
        cin >> p1[i];
        saida = p1[i] + p1[i+1];

    }
    cin >> m;
    int p2[m];
    for(c = 0; c < m; c++) {
        cin >> p2[c];
    }
    for(int a = 0; a < (qt1 - m); a++) {
        cout << saida << endl;
        

    }
}