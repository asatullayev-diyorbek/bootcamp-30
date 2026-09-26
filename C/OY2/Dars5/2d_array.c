#include <stdio.h>

int main(){
    int partalar[3][8] = {
        {2, 5, 7, 1, 9, 10, 14, 0},
        {13, 17, 21, 38, 42, 31, 19, 18},
        {53, 64, 75, 86, 97, 108, 119, 130}
    };

    // printf("1-son: %d\n", partalar[1][3]);
    // printf("2-son: %d\n", partalar[2][6]);

    // printf("Address 0: %p\n", partalar);
    // printf("Address 0: %p\n", partalar[2]);
    // printf("Address 0: %p\n", &partalar[2][0]);

    for(int i=0; i<3; i++){
        printf("%p: ", partalar[i]);
        for(int j=0; j<8; j++){
            printf("%d ", partalar[i][j]);
        }
        printf("\n");
    }
}