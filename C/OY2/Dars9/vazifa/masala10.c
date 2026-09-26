#include <stdio.h>

struct Harorat{
    double C;
};

int main(){
    struct Harorat h1;

    printf("Haroratni kiriting: ");
    scanf("%lf", &h1.C);

    double F = h1.C * 9 / 5 + 32;

    printf("%.2lf ℃ -> %.2lf F\n", h1.C, F);
}
