#include <stdio.h>

int main(){
    int x, y;
    printf("(x, y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0){
        printf("I chorak");
    }
    else if(x < 0 && y > 0){
        printf("II chorak");
    }
    else if(x < 0 && y < 0){
        printf("III chorak");
    }
    else{
        printf("IV chorak");
    }
}