void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);

int main(int argc, char *argv[]) {
    char *can = argv[0];
    char *temp;

    if (argc < 1)
        return 0;

    while(1) {
        temp = mx_strchr(can, '/');
        if (temp == 0) {
            mx_printstr(can);
            mx_printchar('\n');
            break;
        }

        can = temp;
        can++;
    }
}

