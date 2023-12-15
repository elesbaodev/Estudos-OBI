#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        n = (n - 1) + (n - 2);
        printf("%d", n);
    }
}