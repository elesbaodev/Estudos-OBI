#include <iostream>

using namespace std;

int main(void) {
    int n,p;
    cin >> n >> p;
    int x=0,y=0;
    int comps=0;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        if(x + y >= p) {
            comps++;
        }
    } 
    cout << comps << endl;
    return 0;
}