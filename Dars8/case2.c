#include <stdio.h>

int main(){
    int K;
    scanf("%d", &K);

    switch (K){
        case 1:
            printf("Yomon");
            break;
        case 2:
            printf("Qoniqarsiz");
            break;
        case 3:
            printf("Qoniqarli");
            break;
        case 4:
            printf("Yaxshi");
            break;
        case 5:
            printf("A'lo");
            break;
        default: 
            printf("Xato");
    }   
}