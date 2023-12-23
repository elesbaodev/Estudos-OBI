#include <iostream>
using namespace std;

int main(void) {
    int b,c;
    cin >> b >> c;
    int dedos = b + c;
    if(dedos % 2 == 0) {
        cout << "Bino\n";
    } else {
        cout << "Cino\n";
    }
}