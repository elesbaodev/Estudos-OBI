#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if (number > 0) {
        printf("positivo");
    } else if (number < 0) {
        printf("negativo");
    } else if (number == 0) {
        printf("nulo");
    } 
}