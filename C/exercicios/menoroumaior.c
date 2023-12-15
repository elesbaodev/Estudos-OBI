#include <stdio.h>

// Exercício 01
/*int main(void) {
    int n,s=0;
    int i;
    scanf("%d", &n);
    int v[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        s = s + v[i];
    }   printf("%d\n", s);
        
}*/

// Exercicio 02
/*int main(void) {
    int n,s=0;
    scanf("%d", &n);
    int vecto[n];
    for(int i = 0; i < n; i++ ) {
        scanf("%d", &vecto[i]);
        s =  vecto[i];
        s = s / 2;
    }
     printf("%d\n", s);
}*/

// Exercício 03
/*int main(void) {
    int n, maior = 1,menor;
    scanf("%d", &n);
    int vector[n];
    for(int c = 0; c < n; c++) {
        scanf("%d", &vector[c]);
        if(vector[c] > maior ) {
            maior = vector[c];
        } else if (vector[c] < menor) {
            menor = vector[c];

        }
    }
        printf("Maior %d\n", maior);
        printf("Menor %d", menor);
   return 0;     
}*/

// Exercício 04
/*int main(void) {
    int n1;
    int nu;
    scanf("%d", &n1);
    int vet[n1];
    for(int i = 0; i < n1; i++) {
        scanf("%d", &vet[i]);
        if(vet[i] == nu) {
            nu = vet[i];
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
      
    }  scanf("%d",&nu);
        
        // TESTE //
    /*  if(vet[i] == nu) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
}*/
