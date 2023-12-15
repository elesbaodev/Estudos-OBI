#include <stdio.h>

int main(void) {
    char a,b;
    int ta,tb;
    scanf("%c %c",&a,&b);
    scanf("%d %d\n", &ta,&tb);
    if(a == "C") {
        a = (b - 32) * 5/9;
        printf("A");
    }
}