#include <stdio.h>

int main(){
    int son;
    scanf("%d", &son);

    if (son % 2 == 0 && son % 3 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}