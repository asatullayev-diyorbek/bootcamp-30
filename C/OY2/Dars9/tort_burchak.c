#include <stdio.h>
#include <string.h>
struct tort_burchak
{
    double uzunligi;
    double eni;
};
int main()
{
    struct tort_burchak t1;
    printf("Tortburchakni uzunligi kiritilsin");
    scanf("%lf", &t1.uzunligi);

    printf("Uzunligi");
    scanf("%lf", &t1.eni);
    int yuzi = t1.uzunligi * t1.eni, per = (t1.eni + t1.uzunligi) * 2;
    printf("yuzi:%d, perimetr:%d\n", yuzi, per);
}