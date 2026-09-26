#include <stdio.h>

struct Mahsulot{
    float narxi;
    int miqdori;
};

int main(){
    struct Mahsulot olma;
    int umumiy;

    printf("Mahsulot narxini kiriting: ");
    scanf("%f", &olma.narxi);

    printf("Miqdori: ");
    scanf("%d", &olma.miqdori);

    umumiy = olma.narxi * olma.miqdori;
    
    printf("Umumiy narx %d", umumiy);
}