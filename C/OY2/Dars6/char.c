#include <stdio.h>

int main(){
    char simbol = 'A';

    printf("Belgi: %d\n", simbol);
    printf("Belgi: %c\n", simbol);

    int son;
    printf("Raqam kiriting: ");
    scanf("%d", &son);

    printf("%d o'rindagi belgi: %c\n", son, son);
}
