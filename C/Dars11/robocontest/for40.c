#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a,&b);

    for(int i=a; i<=b; i++){
        for(int k=1; k<=i-a+1; k++){
            printf("%d ", i);
        }
    }
}