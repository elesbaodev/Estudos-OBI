#include <stdio.h>

float soma(float a, float b) {
    return a+b;
}
int menor(int a, int b) {
    if(a <= b) {
        return a;
    } else {
        return b;
    }

}
float media(float a, float b) {
    return (a+b) / 2.0;

}

int main() {
     float x,y;
    scanf("%f%f", &x, &y);
    printf("%.1f\n", media(x,y));

   /* if(x < y) {
        printf("%d e menor que %d\n",x,y);
    } else if (x > y) {
        printf("%d e maior que %d\n",x,y);
    } else {
        printf("%d e igual a %d\n",x,y);


    }*/
}