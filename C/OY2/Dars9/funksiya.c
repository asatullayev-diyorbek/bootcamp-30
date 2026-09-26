#include <stdio.h>
#include <string.h>

struct Car{
    char nomi[100];
    int yil;
    double motor_hajmi;
};

void malumot(struct Car *mashina){
    printf("Nomi: %s\n", mashina->nomi);
}

int main(){
    struct Car mashina;

    strcpy(mashina.nomi, "Nexia2");
    mashina.yil = 2014;
    mashina.motor_hajmi = 1.6;

    malumot(&mashina);
}