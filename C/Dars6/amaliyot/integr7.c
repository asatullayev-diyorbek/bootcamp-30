#include<stdio.h>
int main(){
    int son,birlik,onlik,yigindi,kopaytma;
    scanf("%d", &son);
    birlik = son % 10;
    onlik = son / 10;
    yigindi = birlik + onlik;
    kopaytma = birlik * onlik;
    printf("%d %d",yigindi,kopaytma);



}