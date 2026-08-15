#include <stdio.h>
int main(){
    int a;
    printf("soni kriting");
    scanf("%d", &a);

    if(a < 1000 && a > 99){
        printf("togri");
    }else{
        printf("notogri");
    }
    return 0;
}