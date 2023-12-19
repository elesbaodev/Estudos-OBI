#include <iostream>
using namespace std;

int main(void) {
    int t1,t2,t3,ouro=0,prata=0,bronze=0;
    cin >> t1 >> t2 >> t3;
    if(t1 < t2 && t1 < t3) {
        ouro = 1;
    } else if(t2 < t1 && t2 < t3) {
        ouro = 2;
    } else {
        ouro = 3;
    }
    if(t1 < t2 && t2 < t3) {
        ouro = 1;
        prata = 2;
        bronze = 3;
    } else if(t2 < t1 && t1 < t3) {
        ouro = 2;
        prata = 1;
        bronze = 3;
    } else if(t3 < t2 && t2 < t1) {
        ouro = 3;
        prata = 2;
        bronze = 1;
    } else if(t2 < t3 && t3 < t1) {
        ouro = 2;
        prata = 3;
        bronze = 1;
    } else if(t3 < t1 && t2 > t1) {
        ouro = 3;
        prata = 1;
        bronze = 2;
    }
    
     else {
        ouro = 1;
        prata = 3;
        bronze = 2;
    }
    cout << ouro << endl << prata<< endl << bronze;

    return 0;
}