#include <stdio.h>
int global = 1;
int imprimir() {
    int global = 5;
    print("%d\n", global);
}
int main() {
    imprimir();
    printf("Global %d\n",global);
}