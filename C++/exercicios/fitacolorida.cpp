#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int nfita[n];
    int fita[n];
    for(int i = 0; i < n; i++) {
        cin >> fita[i];
    }
    for(int i = 0; i < n; i++) {
        if(fita[i] == 0) {
            nfita[i] += 0;
        } else if(fita[i] + fita[i+1] != 0) {
            nfita[i] += 1;
        }
        for(int i = 0; i < n; i++) {
            cout << nfita[i] << endl;
        }  

    }

}