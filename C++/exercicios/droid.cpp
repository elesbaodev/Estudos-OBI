#include <iostream>
using namespace std;

int main(void) {
    int p,c,f;
    cin >> p >> c;
    p = p * 50;
    c = c * 10;
    if(p > c) {
        f = p - c + 500;
            cout << f << endl;
    } else {
          cout << f << endl;
    }
    return 0;
}