#include <stdio.h>

int main(){
    char suz[100];
    printf("Matnni kiriting: ");
    scanf("%s", suz);
    
    int katta_harf = 0;
    int i=0;
    while (suz[i] != '\0'){
        if (suz[i] >= 65 && suz[i] <= 90 || ){
            katta_harf ++;
        }
        
        i++;
    }

    printf("Katta harflar soni: %d\n", katta_harf);    
}