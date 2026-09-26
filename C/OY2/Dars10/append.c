#include <stdio.h>
#include <string.h>

int main(){
    FILE *mashinalar = fopen("mashinalar.txt", "a");
    char mashina[100];

    while (1==1){
        printf("Mashina nomi: ");
        scanf("%s", mashina);

        if(strcmp(mashina, "stop") == 0){
            break;
        }

        fprintf(mashinalar, "%s ", mashina);
    }
    
    printf("Malumotlar saqlandi!");
    fclose(mashinalar);
}
