#include <stdio.h>

int main(){
    int partalar[3][8] = {
        {2, 5, 7, 1, 9, 10, 14, 0},
        {13, 17, 21, 38, 420, 31, 19, 18},
        {53, 64, 75, 86, 97, 108, 119, 130}
    };
    int kattasi=partalar[0][0];

    for(int i=0; i<3; i++){
        for(int j=0; j<8; j++){
            printf("%d ", partalar[i][j]);
            if(partalar[i][j] > kattasi){
                kattasi = partalar[i][j];
            }
        }
        printf("\n");
    }

    printf("Kattasi: %d\n", kattasi);
}