#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, m;
    printf("n va m ni kiriting: ");
    scanf("%d %d", &n, &m);

    int sonlar[n][m];
    bool bormi=false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d-ustin %d-qator: ", i, j);
            scanf("%d", &sonlar[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(sonlar[i][j] < 0){
                bormi = true;
            }
        }
    }

    if(bormi){
        printf("Manfiy son bor");
    }
    else{
        printf("Manfiy son yo'q");
    }
}