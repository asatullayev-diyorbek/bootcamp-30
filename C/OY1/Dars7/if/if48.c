#include <stdio.h>

int main(){
    int a, b, c, P;
    scanf("%d %d %d", &a, &b, &c);

    if(a+b > c && a+c > b && b+c > a){
        P = a + b + c;
    }
    else{
        P=0;
    }

    printf("%d", P);
}