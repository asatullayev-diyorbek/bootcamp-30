#include <stdio.h>
#include <math.h>
int main (){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        printf("%.0lf ", pow(i, 3)); 
    }
}