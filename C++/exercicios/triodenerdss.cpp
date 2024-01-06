#include <iostream>

using namespace std;

int main(void) {
    string ins1;
    string ins2;
    string ins3;
    cin >> ins1 >> ins2 >> ins3;
    if((ins1 == "violao" && ins2 == "piano" && ins3 == "bateria") or (ins1 == "violao" && ins2 == "bateria" && ins3 == "piano") or (ins1 == "bateria" && ins2 == "violao" && ins3 == "piano") or (ins1 == "bateria" && ins2 == "piano" && ins3 == "violao") or (ins1 == "piano" && ins2 == "bateria" && ins3 == "violao") or (ins1 == "piano" && ins2 == "violao" && ins3 == "bateria")) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    return 0;
}