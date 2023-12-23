#include <iostream>
using namespace std;

int main(void) {
    int n,r,p;
    cin >> n >> r >> p;
    int dias=0;
    int alvos;
    alvos = n;
    while (n < p) {
        dias++;
        alvos = alvos * r;
        n = n + alvos;
    }
    cout << dias << endl;
    

}