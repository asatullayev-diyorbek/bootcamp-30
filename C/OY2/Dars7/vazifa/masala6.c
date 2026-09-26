#include <stdio.h>
#include <stdbool.h>

int main(){
    int sonlar[] = {5, 7, 9, 1, -4, 0, 14, 3};
    int n=8;
    bool almashtirildi=true;

    while (almashtirildi){
        almashtirildi=false;
        for(int i=0; i<n-1; i++){
            if(sonlar[i] > sonlar[i+1]){
                int temp = sonlar[i];
                sonlar[i] = sonlar[i+1];
                sonlar[i+1] = temp;
                almashtirildi=true;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", sonlar[i]);
    }
}