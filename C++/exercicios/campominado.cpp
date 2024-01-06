#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int vet[n];
    for(int i = 0; i < n; i++) {
        cin >> vet[i];
    }
    for(int i = 0; i < n; i++) {
        int qts = 0;
        qts += vet[i];
        if(i < n - 1) {
            qts += vet[i+1];
        }
        if(i > 0) {
            qts += vet[i-1];
        }
        cout << qts << endl;
    } 
    return 0;
}