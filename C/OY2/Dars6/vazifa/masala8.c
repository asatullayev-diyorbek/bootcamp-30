#include <stdio.h>
#include <string.h>

int main(){
    char matn[100];
    printf("Matnni kiriting: ");
    fgets(matn, 100, stdin);

    int n=strlen(matn)-1;

    printf("Belgilar soni: %d\n", n);

    int index = 0;
    for(int i=0; i<n; i++){
        if(matn[i] == ' '){
            printf("\n");
            continue;
        }
        printf("%c", matn[i]);
    }

    // for(int i=strlen(matn)-1; i>=0; i--){
    //     printf("%c ", matn[i]);
    // }
}