#include <stdio.h>

int main() {
    int b,c;
    scanf("%d%d", &b, &c);
    if ((b + c) % 2 == 0) {
        printf("Bino");
    } else {
        printf("Cino");
    }
}