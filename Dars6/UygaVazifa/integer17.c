#include <stdio.h>

int main(){
    int son, yuzlik;
    printf("Sonni kiriting: ");
    scanf("%d", &son);

    yuzlik = son / 100 % 10;
    printf("Yuzlik: %d\n", yuzlik);
    return 0;
}
