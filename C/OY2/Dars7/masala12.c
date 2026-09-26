#include <stdio.h>

int main(){
    int n;
    printf("N= ");
    scanf("%d", &n);

    int sonlar[n][n];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){

            scanf("%d", &sonlar[i][j]);
        }
    }
    int yigindi=0;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                yigindi+=sonlar[i][j];
            }
        }
    }
    printf("Dioganal yigindisi: %d", yigindi);

    return 0;
}