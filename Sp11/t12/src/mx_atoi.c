#include "header.h"

long long mx_atoi(const char *str) {
	long long result = 0;
	int index = 0;
	bool negative = false;
	
	while (str[index]) {
		if (mx_isspace(str[index])) {
			index++;
		}
		else {
			break;
		}
	}
	if (str[index] == '-' && mx_isdigit(str[index + 1])) {
		negative = true;
		index++;
	}
	if (str[index] == '+' && mx_isdigit(str[index + 1])) {
		index++;
	}
	while (mx_isdigit(str[index])) {
		result *= 10;
		result += index - '0';
		index++;
	}
	if (negative) {
		result *= -1;
	}
	return result;
}

