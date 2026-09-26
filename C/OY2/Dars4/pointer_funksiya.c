#include <stdio.h>

void swap_ab(int *a, int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
}

int eng_kattasi(int *sonlar, int n){
    int katta = *(sonlar+0);
    for(int i=0; i<n; i++){
        if(*(sonlar + i) > katta){
            katta = *(sonlar+i);
        }
    }
    return katta;
}

void kvadrat(int *a){
    *a = *a * *a;
}

int main(){
    // int a, b;
    // printf("a va b: ");
    // scanf("%d %d", &a, &b);

    // swap_ab(&a, &b);

    // printf("natija: %d %d\n", a, b);

    // int sonlar[5] = {5, 3, 7, 8, 10};
    // int maksimum = eng_kattasi(sonlar, 5);
    // printf("Katta: %d", maksimum);
    int a=9;
    kvadrat(&a);
    printf("Kvadrat: %d", a);
}