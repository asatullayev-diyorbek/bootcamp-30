#include <stdio.h>

int main (){
    int a=9;
    int *p=&a;

    printf ("%d\n",*p);
    printf ("%p\n",p);
    return 0;
}