#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int v,valores = 0;
    for(int i = 0; i < n; i++) {
        cin >> v;

        if(v == v + 1) {
            valores = i + 1;
            cout << valores << endl;
        }
    }
}