#include <stdio.h>

int main(){
    FILE *sonlar1=fopen("sonlar.txt","a");
    int sonlar[5];
    for(int i=0; i<5; i++){
        scanf("%d", &sonlar[i]);
        fprintf(sonlar1,"%d ", sonlar[i]);
    
    }
    fprintf(sonlar1,"\n");

    fclose(sonlar1);
}