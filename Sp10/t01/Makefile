all: MINILIB

MINILIB:
		clang -std=c11 -Wall -Wextra -Werror -Wpedantic -Iinc -o mx_cp src/*.c

clean:
		rm -rf mx_cp

uninstall:
		rm -rf mx_cp

reinstall:
		make uninstall
		make
