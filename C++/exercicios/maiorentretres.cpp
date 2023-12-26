#include <iostream>

using namespace std;

int main(void) {
    int n1,n2,n3,maior=0;
    cin >> n1 >> n2 >> n3;
    if(n1 > n2 && n1 > n3) {
        maior = n1;
        cout << n1 << endl;
    } else if(n2 > n1 && n2 > n3) {
        maior = n2;
        cout << n2 << endl;
    } else {
        maior = n3;
        cout << n3 << endl;
    }

}