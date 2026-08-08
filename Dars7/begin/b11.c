#include <stdio.h>
#include <math.h>

int main(){
    int a, b, yigindi, kopaytma;
    double bolinma;
    scanf("%d %d", &a, &b);
    a = fabs(a);
    b = fabs(b);
    yigindi = a+b;
    kopaytma = a*b;
    bolinma = 1.0 *  a/b;

    printf("%d\n%d\n%.2lf", yigindi, kopaytma, bolinma);
    return 0;
}