#include <stdio.h>

int main(){
  int N, N1 ,R, P, qtd = 0;
  scanf("%i %i %i", &N, &R, &P);
  N1 = N;
  while (N < P){
    qtd++;
    N1 *= R;
    N += N1;
  }
  printf("%i", qtd);           
}