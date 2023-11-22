#include <stdio.h>

int main() {
    float nota1,nota2,media;
    scanf("%f%f", &nota1, &nota2);
    media = ((nota1*2)+(nota2*3)) / 5; 
    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media < 3) {
        printf("Reprovado\n");
    } else {
        printf("Final\n");
    }
    return 0;
}