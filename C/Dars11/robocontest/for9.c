#include <stdio.h>

int main(){
    int A, B, yigindi=0;
    scanf("%d %d", &A, &B);

    for(int i=A; i<=B; i++){
        int ichki=0;
        for (int k=1; k<=i; k++){
            ichki += i;
            printf("%d ", i);
        }
        yigindi += ichki;
        printf("\n");
    }

    printf("Natija: %d", yigindi);
}