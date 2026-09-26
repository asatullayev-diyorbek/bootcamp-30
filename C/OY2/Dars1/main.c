#include <stdio.h>

// Javob qaytarmaydigan funksiya
void salomlashish(){
    printf("Hammaga salom\n");
}


// Javob qaytaradigan funksiya
int kalkulator(int a, int b, char amal){
    switch (amal){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '^':
            int daraja=1;
            for (int i=1; i<=b; i++){
                daraja *= a;
            }
            return daraja;
    }
}

int main(){
    salomlashish();

    int natija = kalkulator(3, 3, '^');

    printf("%d", natija);
}