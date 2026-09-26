#include <stdio.h>

int main(){
    int n=5;
    // printf("N soni: ");
    // scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
            if (i <= k){
                printf("* ");
            }
            else{
                printf("- ");
            }
        }
        printf("\n");
    }
}
