#include <stdio.h>

int main(){
    int son, onlik, birlik;
    scanf("%d", &son);

    onlik = son/10;
    birlik = son % 10;

    if(onlik == 1){
        printf("o'n ");
    }
    else if(onlik == 2){
        printf("yigirma ");
    }
    else if(onlik == 3){
        printf("o'ttiz ");
    }
    else if(onlik == 4){
        printf("qirq ");
    }
    else if(onlik == 5){
        printf("ellik ");
    }


    if (birlik == 1){
        printf("bir");
    }
    else if (birlik == 2){
        printf("ikki");
    }
    else if (birlik == 3){
        printf("uch");
    }
    else if (birlik == 4){
        printf("to'rt");
    }
    else if (birlik == 5){
        printf("besh");
    }
}