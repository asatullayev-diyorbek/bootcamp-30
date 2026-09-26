#include <stdio.h>
#include <string.h>

struct talaba
{
    int yoshi;
    int ball;
};

int main(){
    struct talaba talaba_1;

    printf("Talaba ma'lumotlari\n");

    printf("Talaba yoshi: ");
    scanf("%d", &talaba_1.yoshi);

    printf("talaba toplagan bali: ");
    scanf("%d", &talaba_1.ball);

    printf("Talaba yoshi: %d\ntalaba toplagan bali: %d\n", talaba_1.yoshi, talaba_1.ball);

    return 0;
}

