int mx_atoi(const char *s);
void mx_printchar(char c);
void mx_printint(int n);

int minimal(a, b) {
    if (a > b)
        return b;
    else
        return a;
}

int maximal(a, b) {
    if (a > b)
        return a;
    else
        return b;
}

int main(int argc, char *argv[]) {
    if (argc != 3)
        return 0;

    int a = mx_atoi(argv[1]);
    int b = mx_atoi(argv[2]);
    int min = minimal(a, b);
    int max = maximal(a, b);

    for (int i = min; i <= max; i++) {
        for (int j = min; j <= max; j++) {
            mx_printint(i * j);
            if (j != max)
                mx_printchar('\t');
        }
        mx_printchar('\n');
    }
}

