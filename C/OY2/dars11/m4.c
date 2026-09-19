#include <stdio.h>
#include <string.h>

int main (){
    FILE *matin=fopen ("matin.txt", "w");
    char matn[500];
    printf ("Matin kiriting:");
    
    fgets (matn, 500, stdin);

    fprintf (matin, "%s", matn);
    fclose (matin);
}