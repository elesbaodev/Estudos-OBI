#include <stdio.h>

int somar(int *a) {
*a += 1;
}

int main() {
    int a = 1;
    somar(&a);
    printf("%d\n",a);

}