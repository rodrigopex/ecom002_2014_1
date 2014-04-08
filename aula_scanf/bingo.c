#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    srand(time(NULL));   
    int b0 =  (rand() % 60) + 1;
    int b1 =  (rand() % 60) + 1;
    
    if(b0 == b1) {
        printf("Bingo: sorteio inválido!\n");
        return 1;
    }
    
    if (b0 <= b1) {
        printf("Bingo 01: %d\n", b0);
        printf("Bingo 02: %d\n", b1);
    } else {
        printf("Bingo 01: %d\n", b1);
        printf("Bingo 02: %d\n", b0);
    }
    return 0;
}
