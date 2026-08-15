#include <stdio.h>
int main(){
    int i, N, yigindi;
    scanf("%d", &N);

    i=1;
    yigindi=0;

    while(i<=N){
        yigindi = yigindi + i;
        i++;
    }
        
    printf("%d", yigindi);
}