// r - read - o'qish uchun
// w - write - yozish uchun (bo'sh fayldan yozadi)
// a - append - qo'shish (davomidan yozish)

#include <stdio.h>
#include <string.h>

int main(){
    FILE *file = fopen("matn.txt", "w");
    char ism[50];

    printf("Address: %p\n", file);

    if(file == NULL){
        printf("Faylni ochib bo'lmadi!\n");
        return 0;
    }

    printf("Ismni kiriting: ");
    scanf("%s", ism);

    fprintf(file, "Salom, \n");
    fprintf(file, ism);
    printf("Faylga ma'lumot saqlandi");
    fclose(file);
}


