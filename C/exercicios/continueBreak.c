#include <stdio.h>

int main() {
    /*
     continue = vai para a próxima interação.
     break = Termina uma laço de repetição.   
    */
   int i;
   for (i = 0; i < 6; i++) {
    if (i == 3) {
        break;
    }
    printf("%d\n", i);
   }
}