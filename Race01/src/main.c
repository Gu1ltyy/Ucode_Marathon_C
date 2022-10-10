#include "header.h"

static void mx_mem_free(char *s) {
	free(s);
	s = NULL;
}

int main(int argc, char **argv) {
	if (argc != 5) {
        mx_printerr("usage: ./mx_part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
        exit(-1);
    }

	char *num1 = mx_strtrim(argv[1]);
	char *operation = mx_strtrim(argv[2]);
	char *num2 = mx_strtrim(argv[3]);
	char *res = mx_strtrim(argv[4]);

	mx_check(argv, num1, operation, num2, res);
	mx_print_res(num1, operation, num2, res);

	mx_mem_free(num1);
	mx_mem_free(operation);
	mx_mem_free(num2);
	mx_mem_free(res);
	return 0;
}

