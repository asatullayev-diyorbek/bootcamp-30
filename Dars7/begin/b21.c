#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    double a, b, c,  S, P, p;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    a = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    b = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));
    c = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));

    p = (a+b+c)/2;

    S = sqrt(p * (p-a) * (p-b) * (p-c));
    P = 2 * p;

    printf("%.2lf %.2lf", S, P);

    return 0;
}
