#include <stdio.h>

int daraja(int son, int n){
    if(n == 1){
        return son;
    }

    return son * daraja(son, n-1);
}

int main(){
    int son, n;
    printf("son va daraja: ");
    scanf("%d %d", &son, &n);

    printf("%d^%d = %d", son, n, daraja(son, n));
}
