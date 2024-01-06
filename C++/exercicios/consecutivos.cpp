#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int pontos = 1;  // Inicializa com 1 ponto, pois sempre haverá pelo menos uma sequência consecutiva de valores.
    int contador = 1;
    int valorAnterior;

    cin >> valorAnterior;

    for (int i = 1; i < n; ++i) {
        int valorAtual;
        cin >> valorAtual;

        if (valorAtual == valorAnterior) {
            contador++;
        } else {
            contador = 1;  // Reinicia o contador se encontrar um valor diferente.
        }

        pontos = max(pontos, contador);
        valorAnterior = valorAtual;
    }

    // Impressão do resultado
    cout << pontos << endl;

    return 0;
}