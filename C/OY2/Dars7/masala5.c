#include <stdio.h>

float ortacha(int sonlar[],int n){
    int yigindi=0;
    for(int i=0; i<n; i++){
        yigindi+=sonlar[i];

    }
    return yigindi * 1.0 / n;
}

int main(){
    int n;
    scanf("%d", &n);
    int sonlar[n];

    for(int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }
    printf("Ortacha: %.2f\n", ortacha(sonlar,n));
}