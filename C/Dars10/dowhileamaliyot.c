#include <stdio.h>

// foydalanuvchidan 0 kiritmaguncha son kiritishini so'rang. 
// kiritilgan sonlarni yig'indisini hisoblang
int main(){
    int son, yigindi=0;

    do{
        printf("Sonni kiriting: ");
        scanf("%d", &son);
        yigindi += son;
    }while(son != 0);
    printf("Yig'indi: %d", yigindi);
}
