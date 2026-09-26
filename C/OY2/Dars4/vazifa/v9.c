#include <stdio.h>

int main(){
    int x=5, y=10;
    int *pointer = &x;
    printf("Qiymat: %d. Adress: %p\n", *pointer, pointer);
    pointer=&y;
    printf("Qiymat: %d. Adress: %p\n", *pointer, pointer);
}