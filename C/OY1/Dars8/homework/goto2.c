#include <stdio.h>

int main(){
    int n, i, natija;
    printf("N = ");
    scanf("%d", &n);

    i=1;
    natija=1;

    qaytarish:
    natija *= i;
    i++;

    if(i <= n) {
        goto qaytarish;
    }
    printf("%d! = %d", n, natija);
}