#include <stdio.h>
#include <string.h>

int main(){
    FILE *sher = fopen("sher.txt", "r");

    if (sher == NULL){
        printf("Faylni ochishda xatolik! ❌");
        return 0;
    }

    char line[100];
    while (fgets(line, 100, sher) != NULL){ // EOF - end of file (faylni oxiri)
        printf("%s", line);
    }
    fclose(sher);
}
