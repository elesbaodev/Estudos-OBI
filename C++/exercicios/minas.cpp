#include <iostream>

using namespace std;

int main(void) {
    int n,i,s=0,anterior=0;
    cin >> n;
    int m[n];
    for(i = 0; i < n; i++) {
        cin >> m[i];
        anterior = m[i];
        s = i;
}
    for(int a = 0; a < n; a++) {
        s--;
        cout << s << endl;
    }
}