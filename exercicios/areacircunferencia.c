#include <stdio.h>

int main() {
    //Formúla Cirfunferência: A = 𝞹R**2 
    // 𝞹 = 3.1416
    float raio,pi=3.1416;
    scanf("%f", &raio);
    printf("%.2f\n", pi * (raio * raio));
    return 0;
}