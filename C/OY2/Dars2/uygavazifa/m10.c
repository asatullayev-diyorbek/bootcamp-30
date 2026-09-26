#include <stdio.h>

int main(){
    int n;
    printf("nechta son kerak: ");
    scanf("%d", &n);
    int  sonlar[n];
    for (int i = 0; i < n; i++){
        printf("%d-son ",i);
        scanf("%d",&sonlar[i]);
    }
    int x,bor=0;
    printf("qidirilyakan son: ");
    scanf("%d",&x);
    for (int i=0; i<n; i++){
        if (sonlar[i]==x){
            bor=1;
        }
    }
    // if (bor==1){
    //     printf("bor");
    // }else {
    //     printf("yoq");
    // }
    // ternar:  (shart)?(bajarilsa):(bajarilmasa);
    (bor==1)?printf("Bor"):printf("Yo'q");
}