#include <stdio.h>

int main(){
    char tomon;
    int buyruq;

    printf("Robot qaysi tomonga qarab turibdi: ");
    scanf("%c", &tomon);

    printf("Buyruq raqami: ");
    scanf("%d", &buyruq);

    switch(tomon){
        case 's':
            if (buyruq==1) tomon='s';
            else if (buyruq == 2) tomon = 'g';
            else tomon = 'q';
            break;
        case 'j':
            if (buyruq==1) tomon='j';
            else if (buyruq == 2) tomon = 'q';
            else tomon = 'g';
            break;
        case 'q':
            if (buyruq==1) tomon='q';
            else if (buyruq == 2) tomon = 's';
            else tomon = 'j';
            break;
        case 'g':
            if (buyruq==1) tomon='g';
            else if (buyruq == 2) tomon = 'j';
            else tomon = 's';
            break;
    }

    printf("Tomon: %c", tomon);
}