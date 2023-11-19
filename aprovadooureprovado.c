#include <stdio.h>

int main() {
    double nota1,nota2,media;
    scanf("%lf%lf", &nota1, &nota2);
    media = (nota1 + nota2) / 2;
    if (media >= 7) {
        printf("Aprovado");
    } else if (media < 7 && media <= 4) {
        printf("Recuperacao");
    } else {
        printf("Reprovado");
    }
}