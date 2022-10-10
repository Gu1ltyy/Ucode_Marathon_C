int mx_atoi(const char *s);
void mx_printchar(char c);
void mx_printint(int n);

int main(int argc, char *argv[]) {
    int n;

    if (argc < 2)
        return 0;

    for (int i = 1; i < argc; i++) {
        n = (mx_atoi(argv[i]));

        for (int i = 31; i >= 0; i--) {
            if ((n >> i) & 1)
                mx_printchar('1');
            else
                mx_printchar('0');
        }

        mx_printchar('\n');
    }
}

