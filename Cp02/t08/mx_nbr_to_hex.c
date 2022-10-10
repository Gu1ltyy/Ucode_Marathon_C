#include "unistd.h"
#include "stdlib.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    if (nbr < 1)
        return 0;

    unsigned long temp_nbr = nbr;
    unsigned long lenght = 0;

    while (temp_nbr) {
        temp_nbr /= 16;
        lenght++;
    }

    if (lenght < 0)
        return NULL;

    char *res = (char *)malloc(lenght + 1);
    for (int i = 0; i <= lenght; i++)
        res[i] = '\0';
    
    for (int i = lenght - 1; i >= 0; i--) {
        unsigned long ch = nbr % 16;
        if (ch < 10)
            res[i] = ch + 48;
        else
            res[i] = ch + 55 + 32;

        nbr /= 16;
    }

    return res;
}

