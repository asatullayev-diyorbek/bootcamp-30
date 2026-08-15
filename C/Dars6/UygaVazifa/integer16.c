#include <stdio.h>

int main(){
    int son, birlik, onlik, yuzlik, yangi;
    printf("Sonni kiriting: ");
    scanf("%d", &son);
    birlik = son % 10;
    onlik  = (son / 10) % 10;
    yuzlik = son / 100;
    yangi = yuzlik * 100 + birlik * 10 + onlik;
    printf("Yangi son: %d\n", yangi);
    return 0;
}