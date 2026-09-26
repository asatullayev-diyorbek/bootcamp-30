#include <stdio.h>

int main(){
    int partalar[3][8];

    for(int i=0; i<3; i++){
        for(int j=0; j<8; j++){
            printf("%d-qator %d-ustun: ", i, j);
            scanf("%d", &partalar[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        printf("%p: ", partalar[i]);
        for(int j=0; j<8; j++){
            printf("%d ", partalar[i][j]);
        }
        printf("\n");
    }
}
