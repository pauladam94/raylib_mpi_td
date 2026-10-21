#ifndef GAME_STAT_H
#define GAME_STAT_H

#define HEIGHT 22
#define WIDTH 10

typedef enum Dir {
    LEFT,
    RIGHT,
    DOWN,
    UP
} Dir;

typedef enum Pice_type {
    I,
    O,
    T,
    L,
    J,
    Z,
    S
} Pice_type;

typedef struct active_pice {
  int active_x;
  int active_y;
  Dir dir;
  int speed;
  Pice_type type;
} active_pice;

typedef struct game_state {
  active_pice *acc;
  Pice_type tab[HEIGHT][WIDTH];
} game_state;

Pice_type** get_tab(*game_state);
active_pice* get_acive_pice(*game_state);


#endif
