#include "operacoes.h"

int sub(int a, int b) {
    return a - b;
}

int soma(int x, int y) {
    return x + y;
}

float extract(float a) {
    int b = a;
    return a - b;
}

int extract3Digit(int a) { //15738 => 7
    float tmp = a/1000.0; //=> 15.738
    tmp = extract(tmp); // => 0.738
    return tmp * 10; // => 7.38
}