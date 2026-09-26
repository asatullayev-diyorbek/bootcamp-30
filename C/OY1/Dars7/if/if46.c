#include <stdio.h>

int main(){
    int yil, rang, hayvon;
    scanf("%d", &yil);

    yil = (yil-1984) % 60;

    if(yil < 12){
        printf("Yashil ");
    }
    else if(yil < 24){
        printf("Qizil ");
    }
    else if(yil < 36){
        printf("Sariq ");
    }
    else if(yil < 48){
        printf("Oq ");
    }
    else if(yil < 60){
        printf("Qora ");
    }

    yil = yil / 5;
    if(yil%12 == 0){
        printf("sichqon yili");
    }
    else if(yil%12 == 1){
        printf("sigir yili");
    }
    else if(yil%12 == 2){
        printf("yo'lbars yili");
    }
    else if(yil%12 == 3){
        printf("quyon yili");
    }
    else if(yil%12 == 4){
        printf("ajdar yili");
    }
    else if(yil%12 == 5){
        printf("ilon yili");
    }
    else if(yil%12 == 6){
        printf("ot yili");
    }
    else if(yil%12 == 7){
        printf("qo'y yili");
    }
    else if(yil%12 == 8){
        printf("maymun yili");
    }
    else if(yil%12 == 9){
        printf("tovuq yili");
    }
    else if(yil%12 == 10){
        printf("it yili");
    }
    else if(yil%12 == 11){
        printf("to'ngiz yili");
    }
}