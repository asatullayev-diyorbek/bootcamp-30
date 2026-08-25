#include <stdio.h>

int main(){
    int n;
    printf("Nechta son kerak: ");
    scanf("%d", &n);

    int sonlar[n];

    for(int i=0; i<n; i++){
        printf("%d - son: ", i);
        scanf("%d", &sonlar[i]);
    }

    int katta=sonlar[0];
    int kichik=sonlar[0];
    for(int i=0; i<n; i++){
        if(sonlar[i]>katta){
            katta = sonlar[i];
        }
        if(sonlar[i]<kichik){
            kichik=sonlar[i];
        }
    }
    printf("Eng katta son: %d\n", katta);
    printf("Eng kichik son: %d\n", kichik);
}