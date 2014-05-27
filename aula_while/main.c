#include <stdio.h>

int qtdDigitosF(long int num) {
    int qtd;
    for(qtd = 1; num >= 10; qtd++) {
        num = num / 10;
    }
    return qtd;
}

int qtdDigitosW(long int num) {
    int qtd = 1;
    while(num >= 10) {
        num = num / 10;
        qtd++;
    }
    return qtd;
}

int main() {
    int x; // = 100000;
    scanf("%d", &x);
    printf("Qtd dígitos de %d: %d\n", x, qtdDigitosW(x));
    int lx = qtdDigitosF(x);
    printf("#%5d#\n", x);
    
    int aux = 5 - lx;
    printf("#");
    while(aux > 0) {
        printf(" ");
        aux = aux - 1;
    }
    printf("%d#\n", x);
    
    int i;
    printf("#");
    for(i = 5 - lx; i > 0; i = i - 1) {
        printf(" ");
    }
    printf("%d#\n", x);
    return 0;
}

