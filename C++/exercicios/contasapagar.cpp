#include <iostream>

using namespace std;

int main(void) {
    int v,a,f,p,co=0;
    cin >> v >> a >> f >> p;
    int contas = a + p + f;
    if(v >= (contas)) {
        co = 3;
    } else if((v >= (a + f)) or v >= (a + p) or v >= (p + f)) {
        co = 2;

    } else if(( v >= a) or (v >= f) or (v >= p)) {
       co = 1;
    } else {
        co = 0;
    } cout << co << endl;
    return 0;
    
     }
     
     
