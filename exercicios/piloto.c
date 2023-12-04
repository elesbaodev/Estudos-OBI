#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if((b - a) < (c-b)) {
        printf("1\n");
    } else if((b - a) > (c - b)) {
        printf("-1\n");

    } else {
        printf("0\n");
    }
}