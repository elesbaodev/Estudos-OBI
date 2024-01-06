#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double n;
    double nums;
    cin >> n;
    cout.precision(4);
    cout.setf(ios::fixed);
    for(int i = 0; i < n; i++) {
        cin >> nums;
        cout << sqrt(nums) << endl;
    } 
    return 0;
}