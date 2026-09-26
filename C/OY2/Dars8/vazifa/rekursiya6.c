#include <stdio.h>

int uchgaKarrali(int son){
    if(son == 1){
        return 0;
    }
    if(son%3==0){
        return son + uchgaKarrali(son-1);
    }
    return uchgaKarrali(son-1);
}

int main(){
    int son;
    printf("Sonni kiriting: ");
    scanf("%d", &son);

    printf("Uchga karralilar yi'gindisi: %d", uchgaKarrali(son));
}