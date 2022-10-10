#include "unistd.h"

void mx_printchar(char c);

void draw(int n, char c) {
    for (int i = 0; i < n; i++)
        mx_printchar(c);
}

void draw_with_border(int n, char c, char border) {
    mx_printchar(border);
    draw(n, c);
    mx_printchar(border);
}

void draw_top(int horizontal_line, int diagonal_line) {
    draw(diagonal_line + 1, ' ');
    draw_with_border(horizontal_line,'-', '+');
    mx_printchar('\n');

    for (int i = 0; i < diagonal_line; i++) {
        draw(diagonal_line - i, ' ');
        draw_with_border(horizontal_line, ' ', '/');
        draw(i, ' ');
        mx_printchar('|');
        mx_printchar('\n');
    }

    draw_with_border(horizontal_line, '-', '+');
    draw(diagonal_line, ' ');
    mx_printchar('|');
    mx_printchar('\n');
}

void draw_bottom(int n, int horizontal_line, int diagonal_line) {
    for (int i = 0; i < n - diagonal_line - 1; i++) {
        draw_with_border(horizontal_line, ' ', '|');
        draw(diagonal_line, ' ');
        mx_printchar('|');
        mx_printchar('\n');
    }
    draw_with_border(horizontal_line, ' ', '|');
    draw(diagonal_line, ' ');
    mx_printchar('+');
    mx_printchar('\n');

    for (int i = 0; i < diagonal_line; i++) {
        draw_with_border(horizontal_line, ' ', '|');
        draw(diagonal_line - i - 1, ' ');
        mx_printchar('/');
        mx_printchar('\n');
    }
    draw_with_border(horizontal_line, '-', '+');
    mx_printchar('\n');
}

void mx_cube(int n) {
    if (n <= 1)
        return;

    
    int horizontal_line = 2 * n;
    int diagonal_line = n / 2;

    draw_top(horizontal_line, diagonal_line);
    draw_bottom(n, horizontal_line, diagonal_line);
}

