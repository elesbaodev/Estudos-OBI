#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string ins1,ins2,ins3,ins;
    cin >> ins1 >> ins2 >> ins3;
    if((ins1 == "bateria" && ins2 == "bateria") || (ins1 == "bateria" && ins3 == "bateria") || (ins1 == "piano" && ins2 == "piano") || (ins1 == "piano" && ins3 == "piano"))  {
        cout << "N" << endl;
    }


    else if((ins1 == "violao" && ins2 == "piano" && ins3 == "bateria") || (ins1 == "violao" && ins2 == "bateria" && ins3 == "piano") || (ins1 == "bateria" && ins2 == "piano" && ins3 == "violao") || (ins1 == "bateria" && ins2 == "violao" && ins3 == "piano") || (ins1 == "piano" && ins2 == "bateria" && ins3 == "violao") || ("piano" && ins2 == "violao" && ins3 == "bateria")) {
        cout << "S" << endl;
}
}