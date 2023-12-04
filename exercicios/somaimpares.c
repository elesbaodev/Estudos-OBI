#include <stdio.h>

int main(void) {
    int anterior;
    for(int i = 1; i <= 500;i= i + 2) {
        if(i / 2 == 1) {
            anterior = i;
            printf("%d", anterior);
        } else {
                 printf("%d\n",i);
        }

    }

}