#include <iostream>

using namespace std;

int main(void) {
    int m,horas=0,minutos=0;
    cin >> m;
    horas = m / 60;
    minutos = m - (horas * 60);
    cout << horas << endl << minutos;
    return 0;
}