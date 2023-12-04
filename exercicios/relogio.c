#include <stdio.h>

int main() {
    int repouso,atual,ox;
    scanf("%d%d%d",&repouso, &atual, &ox);
    if ((atual > repouso * 3) || (ox < 95)) {
        printf("diminuir\n");
    } else if ((atual < repouso * 2) && (ox >97)){
        printf("aumentar\n");
    } else {
        printf("manter\n");
    }
}