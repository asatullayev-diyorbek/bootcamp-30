#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    FILE *sher = fopen("sher.txt", "a");
    char qator[100];

    while (true){
        fgets(qator, 100, stdin);

        if(strcmp(qator, "stop\n") == 0){
            break;
        }

        fprintf(sher, "%s", qator);
    }
    printf("Saqlandi ✅");
    fclose(sher);
}