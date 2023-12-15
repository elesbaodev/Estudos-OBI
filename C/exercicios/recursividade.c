#include <stdio.h>

int fatorial(int n) {
    // Base N = 0, N != 1
    if(n==0) {
        return 1;
    } else {
        return n*fatorial(n-1);
    }
    //Passo N! = N*(N-1) !

}

int main() {
    int n, fat;
    scanf("%d", &n);
    fat = fatorial(n);
    printf("Fatorial de %d e %d\n", n, fat);
}