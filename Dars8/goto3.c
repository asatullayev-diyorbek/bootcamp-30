#include <stdio.h>

int main(){
    int a, b;
    printf("a, b: ");
    scanf("%d %d", &a, &b);

    orqaga:
    printf("%d ", a);
    a++;
    if (a <= b){
        goto orqaga;
    }
}
