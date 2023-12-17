#include <iostream>

using namespace std;

int main(void) {
    int n, i;
    cin >> n;
    int l[n];
    int a = 0, b = 0;

    for (i = 0; i < n; i++) {
        cin >> l[i];
        if (l[i] == 1) {
            a = 1 - a;  // Inverte o estado da lâmpada A
        } else if (l[i] == 2) {
            a = 1 - a;  // Inverte o estado da lâmpada A
            b = 1 - b;  // Inverte o estado da lâmpada B
        }
    }

    cout << a << endl << b;

    return 0;
}