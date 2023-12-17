#include <iostream>
using namespace std;

int main(void) {
    int n,s=0,dias=0,i,premio = 1000000;
    cin >> n;
    int d[n];
    
    for( i = 0; i < n; i++) {
        cin >> d[i];
       if(d[0] + d[i] < premio) {
            dias = i;
       }
    }
        cout << dias << endl;
}