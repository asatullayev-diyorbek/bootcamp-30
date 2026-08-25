#include <stdio.h>

int main(){
    // Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    int n;
    scanf("%d", &n);
    int sonlar[n];

    sonlar[0] = 1;
    sonlar[1] = 1;

    for(int i=2; i<n; i++){
        sonlar[i] = sonlar[i-1] + sonlar[i-2];
    }

    for (int i = 0; i < n; i++){
        printf("%d ", sonlar[i]);
    }
}