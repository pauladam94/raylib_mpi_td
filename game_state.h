#ifndef GAME_STAT_H
#define GAME_STAT_H

typedef enum Dir {
    LEFT,
    RIGHT,
    DOWN,
    UP
} Dir;

typedef struct game_state {
  int active_x;
  int active_y;
  Dir dir;
  int speed;

  

  
} game_state;

#endif
