#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if((a < b && b < c) || (a > b && b > c)){
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else{
        a *= -1;
        b *= -1;
        c *= -1;
    }
    printf("%d %d %d", a, b, c);
}