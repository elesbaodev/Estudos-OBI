#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int n1,s=0;
    for(int i = 0; i < n; i++) {
        cin >> n1;
        s += n1;
    } cout << s << endl;
    return 0;
}