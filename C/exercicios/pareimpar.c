#include <stdio.h>

int main() {
    int dedos1, dedos2,media;
    scanf("%d%d", &dedos1,&dedos2);
    media = dedos1 + dedos2 / 2;
    if((media) == 0) {
        printf("Bino\n");
    } else {
        printf("Cino\n");
    }
}