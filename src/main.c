#include "my_header.h"

int main(void){
    unsigned long long int S1 = 1;
    unsigned char n = 2;

    while (n<50){
        S1 = S1 * n;
        n++;
    }

    return 0;
}
