#include "get_address.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    if (nbr < 1)
        return 0;

    int temp_nbr = nbr;
    long lenght = 0;

    while (temp_nbr) {
        temp_nbr /= 16;
        lenght++;
    }

    char *res = mx_strnew(lenght);
    for (int i = lenght - 1; i >= 0; i--) {
        long ch = nbr % 16;
        if (ch < 10)
            res[i] = ch + 48;
        else
            res[i] = ch + 55 + 32;

        nbr /= 16;
    }

    return res;
}

