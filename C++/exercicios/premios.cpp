#include <iostream>

using namespace std;

int main(void) {
    int paes,doces,bolos,produtos;
    cin >> paes >> doces >> bolos;
    produtos = (paes * 1) + (doces * 2) + (bolos * 3);
    if(produtos >= 150) {
        cout << "B";
    } else if (produtos >= 120) {
        cout << "D";
    } else if (produtos >= 100) {
        cout << "P";
    } else {
        cout << "N";
    }
    
}