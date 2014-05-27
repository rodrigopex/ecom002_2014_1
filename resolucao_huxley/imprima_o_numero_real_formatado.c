#include <stdio.h>
#include <math.h>

double xround(double d, int precision) {
    int factor = pow(10, precision);
    long i = d * factor;
    return i / (double)factor;
}

int main() {
    double num;    
    scanf("%lf", &num);
    printf("|%.2lf|\n", xround(num, 2));
    printf("|%.5lf|\n", xround(num, 5));
    printf("|      %.1lf|\n", xround(num, 1));
    printf("|%.1lf      |\n", xround(num, 1));
    return 0;
}