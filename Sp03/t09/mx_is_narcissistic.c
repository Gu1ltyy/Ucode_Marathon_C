#include <stdio.h>
#include <unistd.h>
#include "stdbool.h"

double mx_pow(double n, unsigned int pow);
bool mx_is_narcissistic(int num) {
    int orig = num;
    int rem;
    int sum = 0;
    int digit = 0;
    int temp = num;

    while(temp != 0) {
        temp = temp / 10;
        digit++;
    }
    while(orig != 0) {
        rem = orig % 10;
        sum = sum + mx_pow(rem, digit);
        orig = orig / 10;
    }
    
    if(sum == num)
        return true;
    else
        return false;
}
