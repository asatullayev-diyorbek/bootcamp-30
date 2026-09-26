#include  <stdio.h>

int main(){
    int sonlar[3][8] = {
        {2, 5, 7, 1, 9, 10, 14, 0},
        {13, 17, 21, 38, 42, 31, 19, 18},
        {53, 64, 75, 86, 97, 108, 119, 130}
    };
    int eng_katta;
    int kattalar[3];
    for (int i=0; i<3; i++){
        eng_katta=sonlar[i][0];
        for (int j=0;j<8; j++){
            printf("%d ", sonlar[i][j]);
            if (sonlar[i][j]>eng_katta){
                eng_katta=sonlar[i][j];
            }

        }
        printf(" Katta=%d\n", eng_katta);
        kattalar[i]=eng_katta;
    }
    for (int i=0; i<3; i++){
        printf("%d ", kattalar[i]);
    }
}