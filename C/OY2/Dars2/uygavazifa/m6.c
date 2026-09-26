#include <stdio.h>

int main(){
    int n;
    printf("nechta son kerak: ");
    scanf("%d", &n);
    int sonlar[n];
    for (int i = 0; i < n; i++){
        printf("%d-son ",i);
        scanf("%d",&sonlar[i]);
    }
    for (int i=0; i<n; i++){
        if (sonlar[i]>0){
        printf("Musbat son: %d", sonlar[i]);
        break;
        }
    }
    
    
}