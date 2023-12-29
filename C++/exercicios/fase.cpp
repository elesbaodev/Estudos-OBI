#include <iostream>

using namespace std;

int main(void) {
    int n,k;
    int co=0;
    cin >> n >> k;
    int i;
    int p[n];
    for(i = 0; i < n; i++) {
        cin >> p[i];
        co += i - 1;
        cout << i << endl;
    } 
        
}