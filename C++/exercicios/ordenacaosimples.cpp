#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int i,ax,x;
    int v[n];
    for( i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(i = 0; i < n; i++) {
        for(x = i + 1; x < n; x++) {
        if(v[i] > v[x]) {
            ax = v[i];
            v[i] = v[x];
            v[x] = ax;
        }

    }
    }
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}