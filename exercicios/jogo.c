#include <stdio.h>

int main() {
    int p,dedo1,dedo2;
    int dedos;
    scanf("%d%d%d", &p, &dedo1,&dedo2);
    dedos = p + dedo1 + dedo2;
    if((dedos) % 2 == 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }

}