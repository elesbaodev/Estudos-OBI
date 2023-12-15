#include <stdio.h>

int main(void) {
    int m,a,b,idades;
    scanf("%d%d%d", &m, &a, &b);
    idades = m - (a + b);
    if(a > b && a > idades && m < 110 && m > a && m > b) {
        idades = a;
        printf("%d\n", idades);

    } else if (b > a && b > idades && m < 110 && m > a && m > b) {
        idades = b;
        printf("%d\n",idades);
    }
    else {
        printf("%d\n",idades);
    }
    return 0;
}