#include <stdio.h>
#include <math.h>

int main(){
    int a, b, masofa;
    scanf("%d %d", &a, &b);
    masofa = b - a;
    printf("%.0lf", fabs(masofa));
    return 0;
}
