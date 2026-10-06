.PHONY: all raylib-lib clean run
CFLAGS = -g -Wall -Wextra -fsanitize=address
LIBRAYLIB = -Ibuild/raylib/include/ -Lbuild/raylib/ -lraylib -lm -lX11

all:
	gcc -o build/main.exe main.c $(LIBRAYLIB) $(CFLAGS)
raylib-lib:
	cd raylib-6.0 && (cmake -B ../build && cmake --build ../build)

run:
	./build/main.exe

clean:
	rm -rf build/

