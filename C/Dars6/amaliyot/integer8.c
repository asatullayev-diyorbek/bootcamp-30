#include <stdio.h>

int main (){
    int son,birlik,onlik,yangi;
    scanf("%d",&son);
    birlik=son%10;
    onlik=son/10;
    yangi=birlik*10+onlik;
    printf("%d",yangi);

    
    return 0;
}

