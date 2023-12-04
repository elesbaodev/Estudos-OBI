#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i < n; i++) {
            scanf("%d", &v[i]);
           if(v[i] == 2) {
            printf("ola");
        }
    }
        printf("%d %d %d", v[0], v[1], v[2]);
}