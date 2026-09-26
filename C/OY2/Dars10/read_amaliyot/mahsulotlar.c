#include <stdio.h>
#include <string.h>

int main(){
    FILE *mahsulotlar = fopen("mahsulotlar.txt", "r");

    char nomi[50];
    double narx, daromad=0;
    int mavjud, sotildi;

    if(mahsulotlar == NULL){
        printf("Faylni o'qishda muammo ❌");
        return 0;
    }

    while (fscanf(mahsulotlar, "%s %lf %d %d", nomi, &narx, &mavjud, &sotildi) == 4){
        printf("*** Mahsulot haqida ***\n");
        printf("Nomi: %s\n", nomi);
        printf("Narx: %.2lf$\n", narx);
        printf("Mavjud: %d ta\n", mavjud);
        printf("Bu oyda sotildi: %d ta\n", sotildi);
        printf("Sotuv hajmi: %.2lf$\n\n", sotildi * narx);
        daromad += sotildi * narx;
    }

    printf("Jami sotuv: %.2lf$ ", daromad);
    fclose(mahsulotlar);
}
