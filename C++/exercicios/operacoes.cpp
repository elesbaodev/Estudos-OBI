#include <iostream>

using namespace std;

int main(void) {
    string c;
    cin >> c;
    double n1,n2;
    cin >> n1 >> n2;
    cout.precision(2);
    cout.setf(ios::fixed);
    if(c == "M") {
        n1 *= n2;
        cout << n1 << endl;
    }
    if(c == "D") {
        n1 = n1 / n2;
        cout << n1 << endl;
    }
    return 0;
    
}