#include <stdio.h>

int main(){
    int birlik, miqdor;
    double kg;
    printf("Og'irlik birligini kiriting: (1-kg, 2-milligram, 3-gramm, 4-tonna, 5-sentner)");
    scanf("%d", &birlik);
    printf("Miqdorni kiriting: ");
    scanf("%d", &miqdor);

    switch(birlik){
        case 1: kg = miqdor; break;
        case 2: kg = miqdor / 1000000.0; break;
        case 3: kg = miqdor / 1000.0; break;
        case 4: kg = miqdor * 1000; break;
        case 5: kg = miqdor * 100; break;
    }
    printf("%lf kg", kg);
}
