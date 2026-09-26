#include <stdio.h>

void make_positive(int *pointer_son){
    if(*pointer_son < 0){
        // *pointer_son = -(*pointer_son); 
        *pointer_son *= -1;
    }
}

int main(){
    int son = -5;
    make_positive(&son);
    printf("Son: %d\n", son);
}