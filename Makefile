.PHONY: all raylib-lib clean run
CFLAGS = -g -Wall -Wextra -Wno-unused-parameter -fsanitize=address -Werror
LIBRAYLIB = -Ibuild/raylib/include/ -Lbuild/raylib/ -lraylib -lm -lX11

all: draw.o game.o game_state.o
	gcc -o build/main.exe main.c $(LIBRAYLIB) $(CFLAGS)
raylib-lib:
	cd raylib-6.0 && (cmake -B ../build && cmake --build ../build)

draw.o: draw.c draw.h
	gcc $(LDFLAGS) $^ -o $@
game.o: game.c game.h
	gcc $(LDFLAGS) $^ -o $@
game_stat.o: game_state.c game_state.h
	gcc $(LDFLAGS) $^ -o $@

run:
	./build/main.exe

clean:
	rm -rf build/

