#include <stdio.h>

int main(){
    int n;
    printf("Nechta son kerak: ");
    scanf("%d", &n);

    int sonlar[n], juft=0;

    for(int i=0; i<n; i++){
        printf("%d - son: ", i);
        scanf("%d", &sonlar[i]);
    }

    for(int i=0; i<n; i++){
        if (sonlar[i] % 2 == 0) juft++;
    }
    printf("Juftlar soni: %d\n", juft);
}
