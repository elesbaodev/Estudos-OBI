#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int r[n];
    int i;
    int c=0;
    for( i = 0; i < n; i++) {
        cin >> r[i];
        
        if(r[i] >= r[i] + i or r[i] + i > r[i] ) {
            c += 1;
        }
}         cout << c << endl;
}