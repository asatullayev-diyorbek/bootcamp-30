#include <stdio.h>

int main(){
    int yigindi=0;
    for (int i=10; i>=1; i--){
        printf("%d ", i);
        yigindi += i;
    }
    printf("\nYig'indi: %d", yigindi);
}
