#include <stdio.h>
#include <math.h>

struct Nuqta{
    float x;
    float y;
};

int main(){
    struct Nuqta A, B;

    printf("A nuqta: ");
    scanf("%f %f", &A.x, &A.y);

    printf("B nuqta: ");
    scanf("%f %f", &B.x, &B.y);

    double masofa;
    masofa = sqrt(pow(B.x-A.x, 2) + pow(B.y-A.y, 2));

    printf("Masofa: %lf", masofa);
}
