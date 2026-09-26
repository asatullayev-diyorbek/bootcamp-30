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

    int qoshnilar[n-1];
    for (int i = 0; i < n-1; i++){
        qoshnilar[i] = sonlar[i] + sonlar[i+1];
    }

    int katta_index = 0;
    for (int i = 0; i < n-1; i++){
        if(qoshnilar[i] > qoshnilar[katta_index]){
            katta_index = i;
        }
    }
    printf("Eng kattasi: %d %d", sonlar[katta_index], sonlar[katta_index+1]); 
}