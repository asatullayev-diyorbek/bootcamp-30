#include <stdio.h>

void kvadratPerimetri(int tomon){
    printf("%d sm lik kvadrat perimetri: %d sm2\n", tomon, tomon * 4);
}

int oxirgiRaqam(int son){
    return son % 10;
}

float ortaQiymat(float a, float b, float c){
    return (a + b + c) / 3;
}

void minutsekund(int sekund){
 printf("%d minut ",sekund/60 );
 printf("%d sekund\n",sekund%60);
  }


int main(){
    int a;
    printf("Tomon: ");
    scanf("%d", &a);

    kvadratPerimetri(a);

    printf("%d\n", oxirgiRaqam(a));
    printf("O'rtacha: %.2f\n", ortaQiymat(4.5, 6.5, 8));

    

    minutsekund(125);
}