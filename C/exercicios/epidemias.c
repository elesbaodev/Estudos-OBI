#include <stdio.h>

int main(void) {
    int n,n1,r,p,dias=0;
    scanf("%d %d %d", &n, &r, &p);
    n1 = n;
    while(n < p) {
        dias++;
        n1 *= r;
        n += n1;


    } printf("%d", dias);
}