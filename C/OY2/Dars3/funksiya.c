#include <stdio.h>

int eng_kattasi(int sonlar[], int n){
    int katta = sonlar[0];
    for (int i = 0; i < n; i++){
        if (sonlar[i] > katta){
            katta = sonlar[i];
        }
    }
    return katta;
}

int summa(int sonlar[], int n){
    int yigindi=0;
    for(int i=0; i<n; i++){
        yigindi += sonlar[i];
    }
    return yigindi;
}

int main(){
    int n;
    printf("N = ");
    scanf("%d", &n);

    int sonlar[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &sonlar[i]);
    }
    printf("Kattasi: %d\n", eng_kattasi(sonlar, n));
    printf("Yig'indi: %d\n", summa(sonlar, n));
}
