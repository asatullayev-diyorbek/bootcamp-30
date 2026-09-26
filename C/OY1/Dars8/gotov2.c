#include <stdio.h>

int main(){
    double a, b;
    int rozilik;

    qayta:
    printf("a, b: ");
    scanf("%lf %lf", &a, &b);

    if (b != 0){
        printf("%lf", a / b);
    }
    else{
        printf("Sonni 0 ga bo'lib bo'lmaydi\nQayta son kiritasizmi? ");
        scanf("%d", &rozilik);
        if(rozilik == 1) goto qayta;
    }
}