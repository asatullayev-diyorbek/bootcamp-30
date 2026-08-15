#include <stdio.h>

int main(){
    int n, yigindi, son;
    printf("n = ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d-son: ", i);
        scanf("%d", &son);
        yigindi+=son;
    }
    printf("Yig'indi: %d", yigindi);
}
