#include <stdio.h>

struct test {
    int a;
    char b;
    int c;
    char d;
    char e;
    int * f;
};

typedef struct test Test;
    
int main() {
    Test tmp;
    printf("Tamanho da estrutura: %ld\n", sizeof(struct test));
    printf("E tmp  : %p\n", &tmp);
    printf("E tmp.a: %p\n", &tmp.a);
    printf("E tmp.b: %p\n", &tmp.b);
    printf("E tmp.c: %p\n", &tmp.c);
    printf("E tmp.d: %p\n", &tmp.d);
    printf("E tmp.e: %p\n", &tmp.e);
    printf("E tmp.f: %p\n", &tmp.f);
    return 0;
}
