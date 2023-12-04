#include <stdio.h>

int main() {
    int alunos,monitores;
    scanf("%d%d", &alunos,&monitores);
    if(alunos + monitores > 50) {
        printf("N\n");
    } else {
        printf("S\n");
    }
    return 0;
}