#include <stdio.h>
#include <string.h>

int main(){
    char matn[100];
    printf("Matnni kiriting: ");
    fgets(matn, 100, stdin);

    int probel_count=1;

    for(int i=0; i<strlen(matn)-1; i++){
        if(matn[i] == ' '){
            probel_count ++;
        }
        else{
            probel_count=0;
        }

        if(probel_count > 1){
            continue;
        }

        printf("%c", matn[i]);
    }
    printf("\n");
}