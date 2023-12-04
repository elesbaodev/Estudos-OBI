#include <stdio.h>

int main(void) {
    int n1,n2;
    scanf("%d%d", &n1,&n2);
    for(int i = 0; i <= n2; i= i + n1) {
        if(i == n2) {
            printf("%d.", i);
        } else {
            printf("%d,",i);
        }
    }
}