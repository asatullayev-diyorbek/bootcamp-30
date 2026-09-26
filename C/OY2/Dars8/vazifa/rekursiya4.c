#include <stdio.h>

int beshlarSoni(int son){
    if (son == 0){
        return 0;
    }
    return (son%10==5) + beshlarSoni(son/10);
}

int main(){
    int son;
    printf("Sonni kiriting: ");
    scanf("%d", &son);

    printf("5lar soni: %d ta\n", beshlarSoni(son));
}
