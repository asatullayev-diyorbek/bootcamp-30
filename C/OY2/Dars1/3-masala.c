#include <stdio.h>
#include <math.h>

void mean(int son1, int son2){
    float arifmetik = (son1 + son2) / 2.0;
    float geometrik = pow(son1*son2, 0.5);
    
    printf("Arifmetik: %f; Geometrik: %f\n", arifmetik, geometrik);
}

float mean_arifmetik(int son1, int son2){
    return (son1 + son2) / 2.0;
}

float mean_geometrik(int son1, int son2){
    return pow(son1*son2, 0.5);
}

int main (){
    int a, b, c, d;
    printf("a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    mean(a, b);
    mean(a, c);
    mean(a, d);

    float arifmetik_ab = mean_arifmetik(a, b);
    

    printf("Arifmetik: %f; Geometrik: %f\n", mean_arifmetik(a, b), mean_geometrik(a, b));
}