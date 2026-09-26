#include <stdio.h>

int main(){
    FILE *sher = fopen("sher.txt", "r");

    if (sher == NULL){
        printf("Faylni ochishda xatolik! ❌");
        return 0;
    }

    char belgi;

    while ((belgi = fgetc(sher)) != EOF){ // EOF - end of file (faylni oxiri)
        printf("%c ", belgi);
    }
    fclose(sher);
}
