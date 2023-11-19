#include <stdio.h>

int main() {
    int p,r;
    scanf("%d%d", &p, &r);
    if(p == 1 && r == 0) {
        printf("B");

    } else if (p == 0 && r == 0) {
        printf("C");

    } else if (p == 0 && r == 1) {
        printf("C");

    } else if(p == 1 && r == 1) {
        printf("A");
    }
}