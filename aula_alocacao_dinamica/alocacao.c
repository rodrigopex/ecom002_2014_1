#include <stdlib.h>
#include <stdio.h>

int *newIntArray(int n) {
    return malloc(sizeof(int)*n);
}

void deleteIntArray(int **arr) {
    printf("arr  = %p\n", arr);
    printf("*arr = %p\n", *arr);
    if(*arr) {
        printf("Deletando dados cadastrados...");
        free(*arr);
        *arr = 0;
        printf("[ok]\n");
    }
}

int main () {
    int *a = newIntArray(5); //<=> int a[5];
    int *iterator, *end;
    for(iterator = a, end = a + 5; 
        iterator < end; iterator++) {
        scanf("%d", iterator);
    }
    printf("Dados cadastrados:\n");
    for(iterator = a; iterator < end; iterator++) {
        printf("%d\n", *iterator);
    }
    printf("a    = %p\n", a);
    printf("&a   = %p\n", &a);
    deleteIntArray(&a);
    printf("a    = %p\n", a);
    return 0;
}