#include <stdio.h>

int main(){
    double son1, son2, amal, natija;
    scanf("%lf %lf", &son1, &son2);
    scanf("%lf", &amal);

    if(amal == 1){
        natija = son1 + son2;
    }
    else if (amal == 2){
        natija = son1 - son2;
    }
    else if (amal == 3){
        natija = son1 / son2;
    }
    else if (amal == 4){
        natija = son1 * son2;
    }
    printf("Natija: %.5lf", natija);

}