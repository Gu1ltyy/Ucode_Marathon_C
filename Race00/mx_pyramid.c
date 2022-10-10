#include "unistd.h"

void mx_printchar(char c);

void draw(int n, char c) {
    for (int i = 0; i < n; i++)
        mx_printchar(c);
}

void draw_body(int n) {
    for (int i = 1; i <= n / 2 - 1; i++) {
        draw(n - 1 - i, ' ');
        mx_printchar('/');
        draw(i * 2 - 1, ' ');
        mx_printchar('\\');
        draw(i, ' ');
        mx_printchar('\\');
        mx_printchar('\n');
    }

    for (int i = 1; i < n / 2; i++) {
        draw(n / 2 - i, ' ');
        mx_printchar('/');
        draw((i + n / 2 - 1) * 2 - 1, ' ');
        mx_printchar('\\');
        draw(n / 2 - i, ' ');
        mx_printchar('|');
        mx_printchar('\n');
    }
}

void mx_pyramid(int n) {
    if (n < 2 || n % 2 != 0)
        return;

    draw(n - 1, ' ');
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');

    draw_body(n);

    mx_printchar('/');
    draw(n * 2-  3, '_');
    mx_printchar('\\');
    mx_printchar('|');
    mx_printchar('\n');
}

