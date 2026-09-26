#include <stdio.h>

void chiqar(int n){
    printf("%d ", n); 

    if(n != 1){
        chiqar(n-1);
    }
}

int main(){
    chiqar(10);
}