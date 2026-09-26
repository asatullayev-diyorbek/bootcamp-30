#include <stdio.h>

int main(){
    int n;
    printf("Nechta son kerak: ");
    scanf("%d", &n);

    int sonlar[n];

    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }
    int eng_kichik=sonlar[0];
    int index=0;

    for (int i=0; i<n; i++){
        if (sonlar[i]<eng_kichik){
            eng_kichik=sonlar[i];
            index=i;
        }
    }
    printf("Eng kichik son: %d\n", eng_kichik);
    printf("Eng kichik son indeksi: %d\n", index);

    return 0;
}