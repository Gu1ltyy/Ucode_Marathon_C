int mx_atoi(const char *s);
void mx_printchar(char c);
void mx_printint(int n);

int main(int argc, char *argv[]) {
    int res = 0;
    int temp;

    if(argc < 2)
        return 0;

    for (int i = 1; i < argc; i++) {
        temp = mx_atoi(argv[i]);
        res += temp; 
    }
    
    mx_printint(res);
    mx_printchar('\n');
}

