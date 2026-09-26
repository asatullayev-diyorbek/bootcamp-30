#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int sonlar[n];

    int juft_yig=0;
    int toq_yig=0;

    for(int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }
    for(int i=0; i<n; i++){
        if(sonlar[i]%2==0){
            juft_yig+=sonlar[i];
        }
        else{
            toq_yig+=sonlar[i];
        }
    }
    printf("Juft sonni yigindisi: %d\n", juft_yig);
    printf("Toq sonni yigindisi: %d\n", toq_yig);
}