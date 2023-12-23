#include <iostream>
using namespace std;

int main(void) {
    int n,divs = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            divs = i;
        cout << divs << " ";
        
        }
    }
    return 0;
}