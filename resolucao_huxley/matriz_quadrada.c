#include <stdio.h>

void fillup(int **m, int size, int current) {
    int x, y;
    for(x = current - 1; x < n; ++x) {
        //printf(".");
        if(x == current - 1 || x == n - 1) {
            for(y = current - 1; y < n; ++y) {
                m[x][y] = 1;
            }
        } else {
            for(y = current; y < (n - current); ++y) {
                m[x][y] = ;
            }
            m[x][0] = 1;
            m[x][n - 1] = 1;
        } 
    }
}

void printMatrix(int **m, int size) {
    int x, y;
    for(x = 0; x < size; ++x) {
        for(y = 0; y < size; ++y) {
            printf("%d ", m[x][y]);
        }
        printf("\n");
    }
}

int main() {
    int n = 4;
    int ** m = malloc(sizeof(int *));
    fillup(m, 4, 1);
    printMatrix(m, 4);
    return 0;
}