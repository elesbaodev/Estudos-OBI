#include <iostream>
using namespace std;

int main(void) {
    int n;
    int copos=0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int l,c;
        cin >> l >> c;

        if(l > c) {
            copos += c;

        }
    }
    cout << copos << endl;
}