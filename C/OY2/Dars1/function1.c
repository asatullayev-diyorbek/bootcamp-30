#include <stdio.h>

int PowerA3(int son){
    return son * son * son;
}

void PowerA234(int son){
    printf("%d darajalari: %d, %d, %d\n", son, son*son, son*son*son, son*son*son*son);
}

int main(){
    int a, b, c;
    printf("a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d ning 3-darajasi: %d\n", a, PowerA3(a));
    printf("%d ning 3-darajasi: %d\n", b, PowerA3(b));
    printf("%d ning 3-darajasi: %d\n", c, PowerA3(c));

    PowerA234(a);
    PowerA234(b);
    PowerA234(c);
}