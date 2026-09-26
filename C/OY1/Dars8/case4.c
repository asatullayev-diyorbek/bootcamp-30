#include <stdio.h>

int main(){
    int oy;
    scanf("%d", &oy);
    switch (oy){
        case 3:
        case 5:
        case 8:
        case 7:
        case 10:
        case 12:
        case 1: printf("31 kunlik"); break;

        case 4:
        case 6:
        case 9:
        case 11:printf("30 kunlik"); break;

        case 2:printf("28 kunlik"); break;

        default:printf("Bunday oy mavjud emas !");
        
    }
    
    
}