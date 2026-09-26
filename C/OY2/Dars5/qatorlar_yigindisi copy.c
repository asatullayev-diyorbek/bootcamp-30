#include <stdio.h>

int main(){
    int partalar[3][8] = {
        {2, 5, 7, 1, 9, 10, 14, 0},
        {13, 17, 21, 38, 42, 31, 19, 18},
        {53, 64, 75, 86, 97, 108, 119, 130}
    };
    int qator_yigindilar[3] = {0, 0, 0};
    int ustun_yigindilar[8] ={0, 0, 0, 0, 0, 0, 0, 0};

    for(int i=0; i<3; i++){
        for(int j=0; j<8; j++){
            printf("%d ", partalar[i][j]);
            qator_yigindilar[i] += partalar[i][j];

            ustun_yigindilar[j] += partalar[i][j];
        }
        printf("\n");
    }

    for(int i=0; i<3; i++){
        printf("%d-qator yig'indisi: %d\n", i, qator_yigindilar[i]);
    }

    for(int i=0; i<8; i++){
        printf("%d ", ustun_yigindilar[i]);
    }
}