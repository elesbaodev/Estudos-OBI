#include <iostream>
using namespace std;

int main(void) {
    int a,m;
    cin >> a >> m;
    int al;
    al = a + m;
    if(al <= 50) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
}