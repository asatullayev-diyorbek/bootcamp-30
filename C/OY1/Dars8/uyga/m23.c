#include <stdio.h>

int main(){
    int x1, x2, x3, x4, y1, y2, y3, y4;
    printf("A(x, y): ");
    scanf("%d %d", &x1, &y1);

    printf("B(x, y): ");
    scanf("%d %d", &x2, &y2);

    printf("C(x, y): ");
    scanf("%d %d", &x3, &y3);

    if (x2 == x3 || x1 != x2 || x2 != x3) x4 = x1;
    else if (x1 == x2) x4 = x3;
    else x4 = x2;

    if (y2 == y3) y4 = y1;
    else if (y1 == y2) y4 = y3;
    else y4 = y2;

    printf("D(%d, %d)\n", x4, y4);
}