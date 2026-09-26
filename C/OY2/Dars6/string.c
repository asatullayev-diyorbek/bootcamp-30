#include <stdio.h>
#include <string.h>

int uzunlik(char *word){
    int i=0;
    while (word[i] != '\n'){
        i++;
    }
    return i; 
}

char *toUpper(char word[]){
    int i=0;
    while (word[i] != '\n'){
        if(word[i] >= 97 && word[i] <= 122){
            word[i] = word[i] - 32;
        }
        i++;
    }
    return word;
}

char *toLower(char word[]){
    int i=0;
    while (word[i] != '\n'){
        if(word[i] >= 65 && word[i] <= 90){
            word[i] = word[i] + 32;
        }
        i++;
    }
    return word;
}

char *swapCase(char word[]){
    int i=0;
    while (word[i] != '\n'){
        if(word[i] >= 65 && word[i] <= 90){
            word[i] = word[i] + 32;
        }
        else if(word[i] >= 97 && word[i] <= 122){
            word[i] = word[i] - 32;
        }
        i++;
    }
    return word;
}

int main(){
    char word[50];
    printf("Ismingizni kiriting:");
    fgets(word, 50, stdin);

    printf("Kiritilgan ism: %s", word);
    printf("So'z uzunligi: %d\n", uzunlik(word));
    // printf("toUpper: %s", toUpper(word));
    // printf("toLower: %s", toLower(word));
    printf("swapCase: %s", swapCase(word));
}

