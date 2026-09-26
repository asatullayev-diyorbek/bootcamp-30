#include <stdio.h>

int katta_raqam(int n, int katta){
    if(n == 0){
        return katta;
    }
    return katta_raqam(n/10, (n%10>katta)?(n%10):(katta));
}

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);

    printf("%d sonning eng katta raqami: %d", n, katta_raqam(n, 0));
}