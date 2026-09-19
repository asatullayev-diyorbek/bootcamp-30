#include <stdio.h>

int main(){
    FILE *ismlar = fopen("ismlar.txt", "a");
    char ism[50];

    for(int i=1; i<=3; i++){
        printf("Ism: ");
        scanf("%s", ism);

        fprintf(ismlar, "%s\n", ism);
    }

    fclose(ismlar);
    printf("Ismlar saqlandi!");
}
