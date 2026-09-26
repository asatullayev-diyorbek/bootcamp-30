// #include <stdio.h>

// int main(){
//     int pul, soni=0;
//     scanf("%d", &pul);

//     while (pul >= 3000)
//     {
//        soni++;
//        pul-=3000;
//     }

//     printf("Pul: %d; Soni: %d", pul, soni);
    
// }


#include <stdio.h>

int main(){
    int pul, soni=0;
    scanf("%d", &pul);

    do {
       soni++;
       pul-=3000;
    } while (pul >= 3000);

    printf("Pul: %d; Soni: %d", pul, soni); 
}
