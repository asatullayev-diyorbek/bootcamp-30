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
    int yigindi=0;
    for (int i=0; i<n; i++){
        if (sonlar[i]<10){
            yigindi+=sonlar[i];
        }
    }
    printf("Yigindisi:%d", yigindi);
    
}