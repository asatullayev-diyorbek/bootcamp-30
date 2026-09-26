#include <stdio.h>

char toUpper(char belgi){
    if(belgi >= 97 && belgi <= 122){
        return belgi - 32;
    }
    return belgi;
}

char toLower(char belgi){
    if(belgi >= 65 && belgi <= 90){
        return belgi + 32;
    }
    return belgi;
}

char swapCase(char belgi){
    if(belgi >= 97 && belgi <= 122){
        return belgi - 32;
    }
    if(belgi >= 65 && belgi <= 90){
        return belgi + 32;
    }
    return belgi;
}

void whatIs(char belgi){
    if(belgi >= 48 && belgi <= 57){
        printf("whatIs: %c -> Raqam\n", belgi);
    }
    else if(belgi >= 65 && belgi <= 90){
        printf("whatIs: %c -> Katta harf\n", belgi);
    }
    else if(belgi >= 97 && belgi <= 122){
        printf("whatIs: %c -> Kichik harf\n", belgi);
    }
    else{
        printf("whatIs: %c -> Belgi\n", belgi);
    }
}

void ascii_table(){
    for(int belgi=0; belgi<= 127; belgi++){
        printf("%d -> %c\n", belgi, belgi);
    }
}

int main(){
    // char belgi;
    // printf("Belgini kiriting: ");
    // scanf(" %c", &belgi);

    // printf("toUpper: %c -> %c\n", belgi, toUpper(belgi));
    // printf("toLower: %c -> %c\n", belgi, toLower(belgi));
    // printf("swapCase: %c -> %c\n", belgi, swapCase(belgi));
    // whatIs(belgi);

    ascii_table();
}