// #include <stdio.h>

// int main(){
//     int son=1;

//     while (son <= 10){
//         printf("%d ", son);
//         son++;
//     }
// }



// // #include <stdio.h>

// // int main(){
// //     int a, b, bolinma=0, qoldiq;
// //     scanf("%d %d", &a, &b);

// //     while (a >= b){
// //         a-=b;
// //         bolinma++;
// //     }
// //     qoldiq=a;
// //     printf("Butun qism: %d\n", bolinma);
// //     printf("Qoldiq: %d", qoldiq);
// // }


// #include <stdio.h>

// int main(){
//     int kunlar=0;
//     double kunlik_yugurish=10, p, jami_masofa=0;

//     printf("Kunlik o'sish foizi: ");
//     scanf("%lf", &p);

//     while (jami_masofa <= 200)
//     {
//         jami_masofa += kunlik_yugurish;
//         kunlar++;

//         kunlik_yugurish *= (1+p/100); 
//     }

//     printf("Jami masofa: %lf\n", jami_masofa);
//     printf("Kunlar: %d", kunlar); 
// }


// N butun soni berilgan, 1 dan N gacha toq sonlar yig'indisini hisoblang.
#include <stdio.h>

int main(){
    int N, yigindi=0;
    scanf("%d", &N);

    while (N > 0)
    {   
        if(N%2==1){
            yigindi += N;
        }
        N--;
        printf("%d %d\n", yigindi, N);
    }
    printf("Yig'indi: %d", yigindi);
}
