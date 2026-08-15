#include <stdio.h>

int main(){
    int a; 
    printf("Sonni kiriting: ");
    scanf("%d", &a);

    if (a == 0){
        printf("Juft ham emas, toq ham emas\n");
    }
    else if(a%2  == 0){
        printf("Juft\n");
    }
    else{
        printf("Toq\n");
    }
}
