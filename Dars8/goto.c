#include <stdio.h>

int main(){
    int son;
    qayta:
    printf("Son kiriting: ");
    scanf("%d", &son);

    if (son < 1 || son > 5){
        goto qayta;    
    }
    printf("Son: %d", son);
}