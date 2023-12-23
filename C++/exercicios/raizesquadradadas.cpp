#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double n;
    cin >> n;
    double n1;
    cout.precision(4);
    cout.setf(ios::fixed);
    for(double i = 0; i < n; i++) {
        cin >> n1;
        cout << sqrt(n1) << endl;
    }
    return 0;
}