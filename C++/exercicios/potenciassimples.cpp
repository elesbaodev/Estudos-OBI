#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double x,y;
    cin >> x >> y;
    cout.precision(4);
    cout.setf(ios::fixed);
    cout << pow(x,y) << endl;
    return 0;
}