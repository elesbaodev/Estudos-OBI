#include <stdio.h>

int main() {
    int id;
    scanf("%d", &id);
    switch (id) {
    case 1:
       printf("Papel\n");
        break;
    case 2:
        printf("Tesoura\n");

    case 3:
        printf("Cola\n");
        break;
    case 4:
        printf("Caneta\n");
        break;
    
    default:
        printf("Faz por ti.");
        break;
    }
}