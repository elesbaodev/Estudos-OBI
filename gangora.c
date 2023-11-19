#include <stdio.h>

int main() {
    int peso_1,comp1,peso_2,comp2;
    scanf("%d%d%d%d", &peso_1,&comp1, &peso_2, &comp2);
    if (peso_1 * comp1 == peso_2 * comp2 || peso_2 * comp2 == peso_1 *comp1) {
        printf("0\n");
    } else if (peso_1 * comp1 > peso_2 * comp2) {
        printf("-1\n");
    } else {
        printf("1\n");
    }
    return 0;
}