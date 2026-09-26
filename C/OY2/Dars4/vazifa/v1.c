#include <stdio.h>

int main(){
    float price = 19.99;
    float *pointer_price = &price;
    printf("Narx: %.2f", *pointer_price);
}