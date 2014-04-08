#include <stdio.h>
#include "operacoes.h"

//Isso eh um comentario!!!

int main() {
    int x = 10;
    int y = 5;
    int a = soma(x,y);
    printf("%5d + %05d = %05d\n", x, y, a);
    printf("%05d + %05d = %05d\n", 100, 2, 102);
    printf("%05d + %05d = %05d\n", 500, 350000, 4000);
    printf("Isso é um float: %25.15f\n", 7/5.0);
    printf("Isso é um float: %.4f\n", extract(3.1415));
    printf("O 3o Digito de %d é %d\n", 15738, extract3Digit(15738));
    printf("Hello %s\n", "world!");
    return 0;
}