#include <stdio.h>

int main(){
    // int sonlar[5] = {17, 3, 2, 9, 10};

    // printf("%p\n", (sonlar+2));
    // printf("%d\n", *(sonlar+2));
    // printf("%d\n", sonlar[2]);

    int n=6;
    int sonlar[n];

    for(int i=0; i< n; i++){
        scanf("%d", (sonlar+i));
    }

    for(int i=0; i< n; i++){
        printf("%d ", *(sonlar+i));
    }
}