#include <stdio.h>


int main() {
    printf("int = %d\n", sizeof(int));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
    printf("char = %d\n", sizeof(char));
    int *P;
    int x;
    x = 5;
    P = &x;
    printf("%d\n", *P);
    printf("%d\n", *P+1);
}



/*int main(){
    int x = 5;
    int *p;
    p = &x;
    printf("%d\n", *p);
    x = 7;
    printf("%d\n", *p);
    *p = 2;
    printf("%d\n", *p);

}*/