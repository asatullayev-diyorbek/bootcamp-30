#include <stdio.h>

int main(){
    int login, parol;

    do {
        printf("Login va parolni kiriting: ");
        scanf("%d %d", &login, &parol);
    } while (parol != 4321 || login != 1234);

    printf("Xush kelibsiz!");
}
