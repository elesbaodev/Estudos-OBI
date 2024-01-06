#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int ns[n];
    int vez=0;
    for(int i = 0; i < n; i++) {
        cin >> ns[i];
    }
    for(int i = 0; i < n-2; i++) {
        if(ns[i] == 1 && ns[i + 1] == 0 && ns[i + 2] == 0 ) {
            vez++;
        }
    } cout << vez << endl;
}