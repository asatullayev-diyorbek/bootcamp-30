#include <stdio.h>

int main(){
    int sonlar[5];
    
    for(int i=0; i<5; i++){
        printf("%d - sonni kiriting: ", i);
        scanf("%d", &sonlar[i]);
    }

    for(int i=4; i>=0; i--){
        printf("%d ", sonlar[i]);
    }
}