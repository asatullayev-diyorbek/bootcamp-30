#include <stdio.h>

int main(){
    int n;
    printf("nechta son kerak: ");
    scanf("%d", &n);
    
    int sonlar[n],yegindi=0;
    for(int i=0; i<n; i++){
        printf("%d soni kiriting", i);
        scanf("%d", &sonlar[i]);
    }
    for (int i=0; i<n; i++){
        yegindi+=sonlar[i];
    }
    
printf("%d", yegindi);
}