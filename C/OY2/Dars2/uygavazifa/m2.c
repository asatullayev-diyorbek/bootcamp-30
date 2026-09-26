#include <stdio.h>

int main(){
    int n;
    printf("nechta son kerak: ");
    scanf("%d", &n);
    int sonlar[n];
    for (int i = 0; i < n; i++){
        printf("%d-son ",i);
        scanf("%d",&sonlar[i]);
    }
    printf("%d %d",sonlar[0],sonlar[n-1]);
}