#include <stdio.h>

int main (){

    int a,b,amal;

   printf("matematik ammalarni kiriting");
   scanf("%d",&amal);

    printf("soni kirtig");
    scanf("%d",&a);

    printf("2 chi soni kirting");
    scanf("%d",&b);

    switch (amal){

    case 1:
    printf("%d", a+b); break;
    case 2:
    printf ("%d", a-b); break;
    case 3:    
    printf ("%d" , a/b); break;
    case 4:
    printf ("%d" , a*b); break;

}



    return 0;
}