#include <stdio.h>

int main(){
    int A, B, kopaytma=1;
    scanf("%d %d", &A, &B);

    for(int i=A; i<=B; i++){
        int ichki=0;
        for (int k=1; k<=i; k++){
            ichki += kopaytma;
            printf("%d ", kopaytma);
        }
        kopaytma = ichki;
        // printf("\n");
        printf(" = %d\n", ichki);
    }
    printf("Natija: %d", kopaytma);
}