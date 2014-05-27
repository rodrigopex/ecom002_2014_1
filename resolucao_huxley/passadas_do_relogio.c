#include <stdio.h>
#include <math.h>

int main() {
    int hi, hf, mi, mf;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    if(hi > hf) {
        hf = hf + 12;
    }
    
    mi += hi*60;
    mf = mf + hf*60;
    
    printf("%d\n", (mf - mi) / 60);
    return 0;
}