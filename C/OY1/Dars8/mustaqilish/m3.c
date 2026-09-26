#include <stdio.h>

int main(){
    int son;
    scanf("%d", &son);
    printf("%d\n", ++son);
    son-=2;
    printf("%d\n", son);
}