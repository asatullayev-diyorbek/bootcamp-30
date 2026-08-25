#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sonlar[n];
    for (int i = 0; i < n; i++){
        sonlar[i] = 2 * i + 1;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", sonlar[i]);
    }
}
