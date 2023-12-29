#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    if(n >= 86) {
        cout << "A\n";
    } else if(n >= 61 && n <= 85) {
        cout << "B\n";
    } else if(n >= 1 && n >= 36) {
        cout << "C\n";
    } else if(n >= 1 && n < 36) {  
        cout << "D\n";
    } else {
        cout << "E\n";
    }
    return 0;

}