#include <stdio.h>

int main(void) {
    int vetor[10];

    for(int i = 1; i <= 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 10; i >= 1; i--) {

        printf("%d\n", vetor[i]);

    }
    return 0;
}