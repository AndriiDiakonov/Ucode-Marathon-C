flags := -std=c11 -Wall -Wextra -Werror -Wpedantic
name := way_home

all: WAY_HOME

WAY_HOME:
	clang $(flags) src/*.c -o $(name)

clean:
	rm -f $(name)

uninstall:
	rm -f $(name)

reinstall:
	make uninstall
	make
