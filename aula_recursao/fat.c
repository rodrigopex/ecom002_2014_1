#include <stdio.h>

/*
fat(0) = 1
fat(1) = 1
fat(n) = n * fat(n-1)
*/
int fat(int n) {
    if(n == 2) return 2;
    return n * fat(n - 1);
}

/*
fib(0) = 0
fib(1) = 1
fib(n) = fib(n - 1) + fib(n - 2)
*/
int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    fat(5);
    fib(10);
    return 0;
}