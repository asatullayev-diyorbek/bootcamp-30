#include <stdio.h>

int main(){
    int kun;
    qayta:
    printf("Hafta kuni raqami: ");
    scanf("%d", &kun);

    if (kun == 1){
        printf("Dushanba");
    }
    else if (kun == 2){
        printf("Seshanba");
    }
    else if (kun == 3){
        printf("Chorshanba");
    }
    else if (kun == 4){
        printf("Payshanba");
    }
    else if (kun == 5){
        printf("Juma");
    }
    else if (kun == 6){
        printf("Shanba");
    }
    else if (kun == 7){
        printf("Yakshanba");
    }
    else{
        printf("Bunday hafta kuni mavjud emas! Qayta kiriting!\n");
        goto qayta;
    }
}