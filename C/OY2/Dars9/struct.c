#include <stdio.h>
#include <string.h>

struct Car{
    char nomi[100];
    int yil;
    double motor_hajmi;
};

struct Odam{
    char ism[50];
    int yosh;
    float boyi;
    float vazn;
    char irq[20];
};

struct Telefon{
    
};

int main(){
    struct Car mashina2;

    strcpy(mashina2.nomi, "Nexia2");
    mashina2.yil = 2014;
    mashina2.motor_hajmi = 1.6;

    printf("%s: %d-yil, %lf litr\n", mashina2.nomi, mashina2.yil, mashina2.motor_hajmi);

    printf("Xotira hajmi: %d bayt\n", sizeof(mashina2));
}
