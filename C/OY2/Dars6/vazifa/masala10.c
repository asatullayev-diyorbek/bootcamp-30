#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(){
    char soz[50];
    printf("So'zni kiriting: ");

    scanf("%s", soz);
    int soni = strlen(soz);

    printf("Soni: %d\n", soni);
    bool is_polindrom = true;

    for(int i=0; i<soni; i++){
        printf("%c %c\n", soz[i], soz[soni-1-i]);
        if(soz[i] != soz[soni-1-i] && fabs(soz[i] - soz[soni-1-i]) != 32.0){
            is_polindrom = false;
        }
    }

    if(is_polindrom){
        printf("Polindrom");
    }
    else{
        printf("Polindrom emas");
    }
}