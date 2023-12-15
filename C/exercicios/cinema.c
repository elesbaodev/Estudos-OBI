#include <stdio.h>

int main(void) {
    int idade1, idade2,idades,preco1=15,preco2=30,preco3=20;
    scanf("%d%d", &idade1, &idade2);
    if(idade1 >= 60 && (idade2 <= 17) || (idade1 <= 17) && (idade2 >= 60)){
        idades = preco3 + preco1;
        printf("%d\n", idades);
    } else if(idade1 <= 17 && (idade2 >= 18) && (idade2 < 60) || (idade1 >= 18) && (idade2 <= 17) && (idade1 < 60)) {
        idades = preco1 + preco2;
        printf("%d\n", idades);
    } else if(idade1 >= 60 && (idade2 >= 18) && (idade2 < 60) || (idade1 >= 18) && (idade2 >= 60) && (idade2 < 60)) {
        idades = preco3 + preco2;
        printf("%d\n", idades);
    }
}