#include <stdio.h>

int main() {
    int x = 100000;
    int lx = 6; // fake
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

