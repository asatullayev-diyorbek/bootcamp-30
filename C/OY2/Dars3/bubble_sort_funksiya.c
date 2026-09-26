#include <stdio.h>
#include <stdbool.h>

int *bubble_sort(int sonlar[], int n){
    bool almashtirildi = true;
    while(almashtirildi){
        almashtirildi = false;

        for(int i=0; i<n-1; i++){
            if(sonlar[i] > sonlar[i+1]){
                almashtirildi = true;
                int temp=sonlar[i];
                sonlar[i] = sonlar[i+1];
                sonlar[i+1] = temp;
            }
        }
    }
    return sonlar;
}

int main(){
    int n=11;
    int sonlar[] = {2, 5, 3, 7, 8, 10, 0, 3, -1, 9, -8};
    int *tartibli_sonlar = bubble_sort(sonlar, n);

    for (int i = 0; i < n; i++){
        printf("%d ", tartibli_sonlar[i]);
    }
}