#include <stdio.h>

int main(void) {
    int A,B,C;
    scanf("%d%d%d", &A,&B,&C);
    if(A + B < C || (A < B && B < C)) {
        printf("1\n");
    } else if(A < B || A < C || B < C) {
        printf("2\n");
    } else {
        printf("3\n");
    }
    return 0;
}