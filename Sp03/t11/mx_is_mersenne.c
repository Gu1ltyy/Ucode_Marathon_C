#include <stdio.h>
#include <unistd.h>
#include "stdbool.h"

bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n) {
    int mersenne;
    int index = 1;

    if(n < 1)
        return false;
    
    while(mersenne <= n) {
        mersenne = mx_pow(2, index) - 1;
        if(mersenne == n && mx_is_prime(n))
            return true;
        
        index++;
    }

    return false;
}

