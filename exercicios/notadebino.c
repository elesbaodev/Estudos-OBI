#include <stdio.h>

int main() {
    float nota1,nota2;
    int media;
    media = (nota1 + nota2) /2;
    switch (media)
    {
    case 7:
        printf("Aprovado\n");
        break;
    case 3:
        printf("Reprovado\n");
        break;
    default:
        printf("Final");
    }
}