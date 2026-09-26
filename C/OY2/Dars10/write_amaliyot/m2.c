#include <stdio.h>
#include <string.h>

int main(){
    FILE *ismlar = fopen("ismlar.txt", "w");
    char ism[100];
    int jami=0;

    while (1 == 1){
        printf("Ismni kiriting: ");
        scanf("%s", ism);

        if (strcmp(ism, "stop") == 0){ // strcmp(matn1, matn2) - so'zlarni solishtiradi
            break;
        }

        fprintf(ismlar, "%s\n", ism);
        jami++;
    }
        fprintf(ismlar, "Jami ismlar: %d", jami);


    printf("Ma'lumotlar saqlandi!");
    fclose(ismlar);
}
