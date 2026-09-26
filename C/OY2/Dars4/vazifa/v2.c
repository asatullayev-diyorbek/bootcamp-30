#include <stdio.h>

void add_years(int *age, int n){
    if(n <= 0){
        printf("Qo'shiladigan yosh qiymati noto'g'ri\n");
    }
    else if(*age <= 0){
        printf("Yosh minusda bo'lmaydi!\n");
        *age = 0;
    }
    else{
        *age += n;
    }
}

int main(){
    int age = -20;
    add_years(&age, 5);
    printf("Yangi yosh: %d\n", age);
}