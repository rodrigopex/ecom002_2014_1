#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Digite x:"); 
    scanf("%d", &x);
    int c = pow(x, 2);
    printf("x^2 = %d\n", c);
    return 0;
}
