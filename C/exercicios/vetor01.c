#include <stdio.h>

int main(void) {
    int vetor[10];
    int x;
    int c = 1;
    for(int i = 0; i < 10; i++){
        scanf("%d ", &vetor[i]);
        }
        scanf("%d", &x);

        for(int i = 0; i < 10; i++) {
            if(vetor[i] == x){
                printf("SIM\n");
                c = 0;
                break;
            }
        }
        if(c == 1) {
            printf("NAO\n");
        }
        return 0;

}