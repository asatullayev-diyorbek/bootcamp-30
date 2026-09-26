#include <stdio.h>
#include <string.h>

struct Mahsulot{
    char nomi[50];
    float narx;
    int son;
};

float hisoblash(struct Mahsulot *mahsulotlar, int n){
    float narx=0;
    for(int i=0; i<n; i++){
        printf("%s: %d x %.2f\n", mahsulotlar[i].nomi, mahsulotlar[i].son, mahsulotlar[i].narx);
        narx += mahsulotlar[i].narx * mahsulotlar[i].son;
    }
    return narx;
}  

int main(){
    struct Mahsulot mahsulotlar[5];

    strcpy(mahsulotlar[0].nomi, "Olma");
    mahsulotlar[0].narx = 10000;
    mahsulotlar[0].son = 4;

    strcpy(mahsulotlar[1].nomi, "Banan");
    mahsulotlar[1].narx = 20000;
    mahsulotlar[1].son = 6;

    strcpy(mahsulotlar[2].nomi, "Nok");
    mahsulotlar[2].narx = 15000;
    mahsulotlar[2].son = 3;

    strcpy(mahsulotlar[3].nomi, "Anor");
    mahsulotlar[3].narx = 25000;
    mahsulotlar[3].son = 5;

    strcpy(mahsulotlar[4].nomi, "Uzum");
    mahsulotlar[4].narx = 18000;
    mahsulotlar[4].son = 2;

    float jami_narx = hisoblash(mahsulotlar, 5);

    printf("Jami narx: %.2f", jami_narx);
}
