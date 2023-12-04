#include <stdio.h>

int main() {
    int paes, doces,bolos,vendas;
    scanf("%d%d%d", &paes, &doces, &bolos);
    vendas = paes * 1 + doces * 2 + bolos * 3;
    if(vendas >= 150) {
        printf("B\n");
    } else if (vendas >= 120 && vendas < 150) {
        printf("D\n");
    } else if (vendas >= 100 && vendas < 120) {
        printf("P\n");
    } else {
        printf("N\n");
    }

    return 0;
}