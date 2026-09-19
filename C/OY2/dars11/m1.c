#include <stdio.h>
#include <string.h>

int main(){
    FILE *ism=fopen("ism1.txt", "w");
    char ismm[50];
    scanf("%s",ismm);
    fprintf(ism, "%s",ismm);
    printf("Malumot faylga saqlandi");
    fclose(ism);
}