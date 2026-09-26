#include <stdio.h>

int teskari(int son, int natija) {
    if (son == 0)
        return natija;
    return teskari(son / 10, natija * 10 + son % 10);
}

int main() {
    int son;
    scanf("%d", &son);
    printf("%d\n", teskari(son, 0));
    return 0;
}
