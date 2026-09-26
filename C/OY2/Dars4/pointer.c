#include <stdio.h>

int main(){
    int n=5;
    int *pointer_n = &n; 
    // * pointer e'lon qilish uchun;
    // &n => o'zgaruvchi addressini olib beradi
    // pointer => address
    // *pointer => address da saqlangan qiymat

    printf("n = %d\n", *pointer_n);
    printf("Pointer: %p\n", pointer_n);

    scanf("%d", pointer_n);
    printf("yangi n: %d\n", *pointer_n);
}
