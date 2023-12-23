#include <iostream>
using namespace std;

int main(void) {
    // Lendo o número de Semanas. //
    int n;
    cin >> n;
    // Declarando as variáveis de Dias e Meses.//
    int d,m;
    // Pegando quantos dias temos nas semanas acima. //
    if(n >= 1) {
    d = 7 * n;
    // Imprimindo quantos dias temos nas N semanas da entrada. //
    cout << d << endl;
    // Realizando as operações para achar quantos meses temos a partir dos dias acima, sabendo que um mês tem 30 dias. //
    m = d / 30;
    // Verificando se há pelo menos quantidade de um mês para a impressão. //
    if(m >= 1) {
        // Imprimindo o número de meses se a condição acima for verdadeira. //
        cout << m;
    }
    return 0;
}
 }