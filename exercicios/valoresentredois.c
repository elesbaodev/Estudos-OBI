#include <stdio.h>

int main() {
    int num1, num2;
    
    // Ler os valores de entrada
    scanf("%d%d", &num1, &num2);

    // Verificar se num1 é menor ou igual a num2
    if (num1 <= num2) {
        // Imprimir os valores entre num1 e num2 em ordem crescente
        for (int i = num1; i <= num2; i++) {
            printf("%d ", i);
        }
    } else {
        // Imprimir os valores entre num2 e num1 em ordem crescente
        for (int i = num2; i <= num1; i++) {
            printf("%d ", i);
        }
    }

    return 0;
}