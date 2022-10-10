#include "get_address.h"

char *mx_get_address(void *p) {
    unsigned long x = (unsigned long)(p);
    char *temp = mx_nbr_to_hex(x);
    char *address = mx_strnew(mx_strlen(temp + 2));
    address[0] = '0';
    address[1] = 'x';
    address += 2;
    address = mx_strcpy(address, mx_nbr_to_hex(x));
    address -= 2;
    free(temp);
    
    return address;
}

