all: MINILIB

MINILIB:
		clang -std=c11 -Wall -Wextra -Werror -Wpedantic -Iinc -o playlist src/*.c

clean:
		rm -rf playlist

uninstall:
		rm -rf playlist

reinstall:
		make uninstall
		make
