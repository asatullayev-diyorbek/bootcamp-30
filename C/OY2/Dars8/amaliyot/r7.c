#include <stdio.h>

int raqamlar_soni(int son){
    if(son < 10){
        return 1;
    }
    return 1  + raqamlar_soni(son/10);
}

int main(){
    int son;
    printf("son: ");
    scanf("%d", &son);

    printf("%d ning raqamlar soni = %d", son, raqamlar_soni(son));
}
