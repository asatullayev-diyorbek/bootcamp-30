#include <stdio.h>

struct Talaba{
    float math;
    float fizika;
    float kimyo;
};

int main (){
    struct Talaba toshmat;
    toshmat.math = 80;
    toshmat.fizika = 90;
    toshmat.kimyo = 70;

    float ortacha;
    ortacha = (toshmat.math + toshmat.fizika + toshmat.kimyo) /3;
    printf("ortacha: %.2f", ortacha);
}