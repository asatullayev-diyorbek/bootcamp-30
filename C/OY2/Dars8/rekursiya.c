// Rekursiv funksiya
// 1-shart: funksiya o'zini ichida o'zini chaqirishi kerak
// 2-shart: to'xtash sharti bo'lishi kerak

#include <stdio.h>

int yigindi(int n){
    if (n==1){
        return 1;
    }
    
    return n + yigindi(n-1);
}

int main(){
    printf("Yig'indi: %d", yigindi(10));
}
