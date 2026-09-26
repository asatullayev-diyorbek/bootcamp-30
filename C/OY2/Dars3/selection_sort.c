#include <stdio.h>

int main(){
    int n=11;
    int sonlar[] = {2, 5, 3, 7, 8, 10, 0, 3, -1, 9, -8};
    
    for(int i=0; i<n-1; i++){
        int kichik_index = i;
        for(int k=i; k<n; k++){
            if(sonlar[k] < sonlar[kichik_index]){
                kichik_index = k;
            }
        }

        int temp = sonlar[i];
        sonlar[i] = sonlar[kichik_index];
        sonlar[kichik_index] = temp;
    }
    
    for (int i = 0; i < n; i++){
        printf("%d ", sonlar[i]);
    }
}