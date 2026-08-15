#include <stdio.h>

int main(){
    int a,b;
    printf("Ikkita son kiriting: ");
    scanf("%d %d", &a, &b);

    if (a>b){
        printf("%d", a+b);
    }
    else printf("%d", a*b);
}