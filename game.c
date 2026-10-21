#include "game.h"
#include "raylib.h"

void update(game_state game_state, const int screenWidth, const int screenHeight){
    game_state.active_y += 40 * GetFrameTime() * game_state.speed; /*40 pixels de déplacement vers le bas : TODO variable*/
    int key_pressed = GetKeyPressed();

    if (IsKeyPressed(262)) { /*right*/
        game_state.active_x += 40 * GetFrameTime() * game_state.speed;
    } else if (IsKeyPressed(263)) { /*left*/
        game_state.active_x -= 40 * GetFrameTime() * game_state.speed;
    } else if (IsKeyPressed(264)) { /*down*/
        /* TODO */
    }
}