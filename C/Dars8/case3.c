#include <stdio.h>
int main(){
    int oy;
    scanf("%d", &oy);

    switch(oy){
        case 1:
        case 2: 
        case 12: printf("Qish"); break;

        case 3:
        case 4:
        case 5: printf("Bahor"); break;

        case 6:
        case 7:
        case 8: printf("Yoz"); break;

        case 9:
        case 10:
        case 11: printf("Kuz"); break;
    }
}