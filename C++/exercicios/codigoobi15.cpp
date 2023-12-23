#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int n1[11000];
    int cont=0;
    int i;
    for(i = 0; i < n; i++) {
        cin >> n1[i];
        if(n1[i] + n1[i+1] == 1) {
            cont = 1;
        } else {
            cont = 0;
        }
    }  cout << cont << endl;
}