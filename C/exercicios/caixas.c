#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if((a+b) < c) {
        printf("1\n");
    } else if(a == b && a == c || b == a && b == c) {
        printf("3\n");
    } else {
        printf("2\n");
    }
}