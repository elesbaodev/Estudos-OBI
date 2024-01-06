#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int nota1=0;
    int nota2=0;
    for(int i = 0; i < n; i++) {
        int n1;
        int n2;
        cin >> n1 >> n2;
        nota1 += n1 / n;
        nota2 += n2 / n;
    }
    if(nota2 > nota1) {
        cout << ":0 <- Gohan e Feijao\n";
    } else if(nota1 > nota2) {
        cout << ":0 <-X- Gohan e Feijao\n";
    } else {
        cout << "Impasse\n";
    }
    return 0;
}