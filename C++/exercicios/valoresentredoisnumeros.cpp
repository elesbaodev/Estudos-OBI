#include <iostream>

using namespace std;

int main(void) {
    int a,b;
    cin >> a >> b;
    if(a < b) {
        for(int i = a; i <= b; i++) {
        cout << i << " ";
    }
    } else {
        for(int i = b; i <= a; i++) {
            cout << i << " ";
        }
    }
    return 0;
}