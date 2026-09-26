#include <stdio.h>

int main(){
    int a ,bekat=1,jami=0;
    printf("soni kiriting: ");
    scanf("%d", &a);
    while (bekat<=a){
        jami+=3;
        bekat++;
     }
      printf("%d", jami);
return 0;
    
}