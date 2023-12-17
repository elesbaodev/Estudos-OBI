#include <iostream>

using namespace std;

int main(void) {
    int cons;
    cin >> cons;
    int conta=0,basic=7;
    if(cons <= 10) {
        conta = basic * 1;
        cout << conta;
    } else if (cons > 10 && cons < 31) {
        conta = (cons - 10) + basic;
        cout << conta << endl;
    } else if(cons >= 31 && cons < 101) {
        conta = (cons - 30) * 2 + 20 + basic;
        cout << conta << endl;
    } else if(cons >= 101) {
        conta = (cons - 100) * 5 + 100 + 20 + basic;
        cout << conta << endl;
    }
}
