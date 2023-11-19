#include <stdio.h>

int main() {
    int alunos,monitores;
    scanf("%d%d", &alunos, &monitores);
    if(alunos + monitores <= 50) {
        printf("S");
    } else {
        printf("N");
    }
}