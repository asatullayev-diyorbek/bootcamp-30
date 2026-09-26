#include <stdio.h>

int raqamlar_yigindisi(int son){
    if(son < 10){
        return son;
    }
    return son % 10 + raqamlar_yigindisi(son/10);
}

int main(){
    int son;
    printf("son: ");
    scanf("%d", &son);

    printf("%d ning raqamlar yig'indisi = %d", son, raqamlar_yigindisi(son));
}
