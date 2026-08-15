#include <stdio.h>
#include <math.h>

int main (){
    double a, b, diaganal;
    printf("to'g'ri to'rtburchakning eni va bo'yini kiriting");
    scanf("%lf %lf", &a, &b);

    diaganal = sqrt(a*a+b*b);

    printf("%lf", diaganal);
}