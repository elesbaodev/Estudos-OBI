#include <stdio.h>

int main(void) {
    int a,b,c,medio=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a < b && c > a && c < b || (a > b) && (a > c)) {
        medio = c;
        printf("%d\n", c);

    } else if((a < b) && (b < c) || (a > b) && (b > c) && (a > c) || (a > b) && (a > c)) {
        medio = b;
        printf("%d\n",medio);
    } else if(b > a && b > c) {
        medio = a;
        printf("%d\n", medio);
    } else {
        medio = a;
        printf("%d\n", medio);
    }
}