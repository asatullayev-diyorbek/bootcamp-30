#include <stdio.h>

int main(){
    int n;
    printf("nechta son kerak: ");
    scanf("%d", &n);
    double  sonlar[n];
    for (int i = 0; i < n; i++){
        printf("%d-son ",i);
        scanf("%lf",&sonlar[i]);
    }
    int sanoq=0;
    for (int i=0; i<n; i++){
        if (sonlar[i]>0){
            sanoq++;
        }
    }

    printf("%d ta musbat son bor", sanoq);
    
}