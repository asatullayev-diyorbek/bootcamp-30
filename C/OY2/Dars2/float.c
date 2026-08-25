#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    float sonlar[n], ortacha=0;
    for(int i=0; i<n; i++){
        scanf("%f", &sonlar[i]);
    }
    for(int i=0; i<n; i++){
        ortacha+=sonlar[i]/n;
    }
    printf("Ortacha qiymat %f ", ortacha);
}