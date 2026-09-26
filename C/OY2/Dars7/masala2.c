#include <stdio.h>

int max2(int a, int b){
    if (a>b)
    {
        return a;
    }else{
        return b;
    }
}

int main(){
    int a, b, c;
    printf("uchta son kiritng: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d kattasi", max2(a, max2(b, c)));
}
