#include <stdio.h>

int main(){
    int a, b, c, v, s;
    scanf("%d %d %d", &a, &b, &c);
    
    v = a * b * c;
    s = 2 * (a*b + b*c + a*c);

    printf("%d\n%d", v, s);
    return 0;
}