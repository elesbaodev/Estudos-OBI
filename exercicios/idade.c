#include <stdio.h>

int main() {
    int idade1,idade2,idade3;
    scanf("%d%d%d", &idade1,&idade2,&idade3);
    if (idade1 < idade2 && idade2 > idade3) {
        printf("%d\n", idade3);
    } else if (idade1 < idade2 && idade2 < idade3) {
        printf("%d\n", idade2);
    } else if (idade1 < idade2 && idade3 == idade1) {
        printf("%d\n", idade1);
    } else if (idade1 > idade2 && idade2 < idade3 && idade1 > idade3){
        printf("%d\n", idade3);
    }
    else {
        printf("%d\n", idade2);
    }
    }