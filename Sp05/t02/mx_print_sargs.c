void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

void words_sorting(char ** argv, int argc) {
    char *cur_str = argv[1];
    int index = 0;
    char* temp = argv[index];

    for (int i = 1; i < argc; i++) {
        cur_str = argv[i];
        index = i - 1;
        
        while(index >= 1 && mx_strcmp(cur_str, argv[index]) < 0) {
            temp = argv[index];
            argv[index] = cur_str;
            argv[index + 1] = temp;
            index--;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2)
        return 0;

    words_sorting(argv, argc);

    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

