#include <stdio.h>

int birnichiRaqam(int son){
    if(son < 10){
        return son;
    }
    return birnichiRaqam(son/10);
}

int main(){
    int son;
    printf("Sonni kiriting: ");
    scanf("%d", &son);

    printf("Birinchi raqam: %d", birnichiRaqam(son));
}