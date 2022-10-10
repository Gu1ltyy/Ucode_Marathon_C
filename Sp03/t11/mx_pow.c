#include <stdio.h>
#include <unistd.h>

double mx_pow(double n, unsigned int pow) {
    double res = 1;

    for(int i = 0; i < pow; i++) {
        res = res * n;
    }
    
    return res;
}

