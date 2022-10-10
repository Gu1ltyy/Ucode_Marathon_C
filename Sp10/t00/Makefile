all: MINILIB

MINILIB:
		clang -std=c11 -Wall -Wextra -Werror -Wpedantic -Iinc -o read_file src/*.c

clean:
		rm -rf read_file

uninstall:
		rm -rf read_file

reinstall:
		make uninstall
		make
