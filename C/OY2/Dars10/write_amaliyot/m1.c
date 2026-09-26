#include <stdio.h>

int main(){
    FILE *sonlar = fopen("sonlar.txt", "w");

    for(int i=1; i<=100; i++){
        fprintf(sonlar, "%d, ", i);

        if(i%10 == 0){
            fprintf(sonlar, "\n");
        }
    }
    printf("Sonlar faylga saqlandi!");

    fclose(sonlar);
}
