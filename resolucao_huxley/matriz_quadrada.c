#include <stdio.h>

void fillup(int size, int m[size][size], int current) {
    int x, y;
    for(x = current - 1; x < size; ++x) {
        //printf(".");
        if(x == current - 1 || x == size - 1) {
            for(y = current - 1; y < size; ++y) {
                m[x][y] = 1;
            }
        } else {
            for(y = current; y < (size - current); ++y) {
                m[x][y] = 0;
            }
            m[x][0] = 1;
            m[x][size - 1] = 1;
        } 
    }
}

void printMatrix(int size, int m[size][size]) {
    int x, y;
    for(x = 0; x < size; ++x) {
        for(y = 0; y < size; ++y) {
            printf("%d ", m[x][y]);
        }
        printf("\n");
    }
}

int main() {
    int n = 8;
    //int ** m = malloc(sizeof(int *));
    int m[n][n];
    fillup(n, m, 1);
    printMatrix(n, m);
    return 0;
}