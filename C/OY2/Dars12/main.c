#include <stdio.h>
#include <stdbool.h>

int main(){
    FILE *matn =fopen("matn.txt", "r");

    if(matn == NULL){
        printf("Fayl ochilmadi!");
    }
    char belgi;
    int katta=0, kichik=0;
    while ((belgi=fgetc(matn)) != EOF){
        if(belgi >= 'A' && belgi <= 'Z'){
            katta++;
        }

        if(belgi >= 'a' && belgi <= 'z'){
            kichik++;
        }
        printf("%c", belgi);
    }
    printf("\nKatta harflar soni: %d\n", katta);
    printf("Kichik harflar soni: %d\n", kichik);
}