#include "game.h"
#include "raylib.h"

game_state* init(){
    // TODO
}

void update(game_state* game_state, const int screenWidth, const int screenHeight){
    game_state->acc->active_y += 40 * GetFrameTime() * game_state->acc->speed; /*40 pixels de déplacement vers le bas : TODO variable*/
    int key_pressed = GetKeyPressed();

    if (IsKeyPressed(262)) { /*right*/
        game_state->acc->active_x += 40 * GetFrameTime() * game_state->acc->speed;
    } else if (IsKeyPressed(263)) { /*left*/
        game_state->acc->active_x -= 40 * GetFrameTime() * game_state->acc->speed;
    } else if (IsKeyPressed(264)) { /*down*/
        /* TODO */
    }
}