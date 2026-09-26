#include <stdio.h>

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);

    int sonlar[n];
    for (int i = 0; i < n; i++){
        printf("%d - son: ", i);
        scanf("%d", &sonlar[i]);
    }

    int osuvchi=1;

    for(int i = 0; i < n-1; i++){
        if(sonlar[i] <= sonlar[i+1]){
            osuvchi++;
        }
    }

    if(osuvchi == n){
        printf("O'suvchi!");
    }
    else if (osuvchi == 1){
        printf("Kamayuvchi!");
    }
    else{
        printf("Aralash");
    }  
}