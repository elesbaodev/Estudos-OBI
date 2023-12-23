#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,p;
    cin >> n;
    int ch[520];
    int i;
    int estoque=0,estoque2=0,total=0;
    for(i = 0; i < n; i++) {
        cin >> ch[i];
        estoque = ch[i];
    } cin >> p;
      int ped[p]; 
    for( int c = 0; c < p; c++) {
        cin >> ped[c];
        estoque2 = ped[c];
        if(estoque > estoque2) {
            total += 1;
        } else {
            total += 0;
        }

    }  cout << total << endl;
}