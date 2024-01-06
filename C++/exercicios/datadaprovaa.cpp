#include <iostream>

using namespace std;

int main(void) {
    int n,d=0,m=0;
    cin >> n;
    if(n >= 1) {
    d = n * 7;
    m = d / 30;
    cout << d << endl;
    if(m > 0) {
        cout << m << endl;
    }
}
    return 0;


}