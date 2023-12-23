#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int a,valores=0,dias=0;
    for(int i = 0; i < n; i++) {
        cin >> a;
        valores += a;
        if(valores >= 1000000) {
            dias = i + 1;
            break;
        }
        
    }   cout << dias << endl;
}